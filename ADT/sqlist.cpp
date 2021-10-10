#include <cstdio>
#include <cstdlib>

#define ok 1
#define error 0
#define OVERFLOW -2
#define list_init_size 100
#define listincrement 10

typedef int status;
typedef int elemtype;
typedef struct {
    elemtype *elem;
    int length;
    int listsize;
}sqlist;

status initlist(sqlist &L) {
    L.elem = (elemtype*)malloc(list_init_size*sizeof(elemtype));
    if (!L.elem) exit(OVERFLOW);
    L.length = 0;
    L.listsize = list_init_size;
    return ok;
}

status inputlist(sqlist &l) {
    int i,n;
    scanf("%d",&n);
    l.length=n;
    for (i=0;i<=l.length-1;i++) scanf("%d",&l.elem[i]);
    return ok;
}

status  listtraverse(sqlist l) {
    int i;
    printf("%d\n",l.length);
    for (i=0;i<=l.length-1;i++) printf("%d ",l.elem[i]);
    printf("\n");
    return ok;
}

status destroylist(sqlist &l) {
    free(l.elem);
    l.length=0;
    l.listsize=0;
    return ok;
}

bool listempty(sqlist L) {
    if (!L.elem) return false;
    if (L.length) return false;
    return true;
}

int listlength(sqlist L) {
    return L.length;
}

status getelem(sqlist l,int i, elemtype &e) {
    if (i > l.length || i <= 0) {
        return error;
    }
    e = l.elem[i-1];
    return ok;
}

int locateelem(sqlist l,elemtype e) {
    for (int i = 0; i < l.length; i++) {
        if (l.elem[i] == e) {
            return i+1;
        }
    }
    return 0;
}

status listinsert(sqlist &l,int i,elemtype e)  {
    if (i < 1 || i > l.length + 1) return error;
    if (l.length >= l.listsize) {
        elemtype* newbase = (elemtype*)realloc(l.elem, (l.listsize+listincrement)*sizeof(elemtype));
        if (!newbase) exit(OVERFLOW);
        l.elem = newbase;
        l.listsize += listincrement;
    }
    elemtype* q = &(l.elem[i-1]);
    for (elemtype* p = &(l.elem[l.length-1]); p >= q; --p) *(p+1) = *p;
    *q = e;
    ++l.length;
    return ok;
}

status listdelete(sqlist &l,int i,elemtype &e) {
    if ((i < 1) || (i > l.length)) return error;
    elemtype* p = &(l.elem[i-1]);
    e = *p;
    elemtype* q = l.elem + l.length-1;
    for (++p; p <= q; ++p) *(p-1) = *p;
    --l.length;
    return ok;
}

status clearlist(sqlist &l) {
    l.length=0;
    return ok;
}

void listsort(sqlist &l) {
    for (int i = 0; i < l.length; i++) {
        bool flag = false;
        for (int j = l.length - 1; j > i; j--) {
            if (l.elem[j] < l.elem[j-1]) {
                elemtype temp = l.elem[j];
                l.elem[j] = l.elem[j-1];
                l.elem[j-1] = temp;
                flag = true;
            }
        }
        if (!flag) break;
    }
}

void listreverse(sqlist &l) {
    for (int i = 0, j = l.length-1; j > i; i++,j--) {
        elemtype temp = l.elem[i];
        l.elem[i] = l.elem[j];
        l.elem[j] = temp;
    }
}

status getmax_min(sqlist l, elemtype &Max, elemtype & Min) {
    if (l.length == 0) return error;
    Max = Min = l.elem[0];
    for (int i = 1; i < l.length; i++) {
        if (Max < l.elem[i]) Max = l.elem[i];
        if (Min > l.elem[i]) Min = l.elem[i];
    }
    return ok;
}

status orderlistinsert(sqlist &l, elemtype e) {
    int i = 0;
    if (l.length >= l.listsize) {
        elemtype* newbase = (elemtype*)realloc(l.elem, (l.listsize+listincrement)*sizeof(elemtype));
        if (!newbase) exit(OVERFLOW);
        l.elem = newbase;
        l.listsize += listincrement;
    }
    while (l.elem[i] < e && i < l.length) {
        i++;
    }
    elemtype* q = &(l.elem[i]);
    for (elemtype* p = &(l.elem[l.length-1]); p >= q; --p) *(p+1) = *p;
    *q = e;
    ++l.length;
    return ok;
}

int countelem(sqlist l, elemtype e) {
    int cnt = 0;
    for (int i = 0; i < l.length; i++) {
        if (l.elem[i] == e) {
            cnt++;
        }
    }
    return cnt;
}

status unionset(sqlist la, sqlist lb, sqlist &lc) {
    lc.elem = (elemtype*)malloc((la.length+lb.length+1)*sizeof(elemtype));
    if (!lc.elem) return error;
    lc.length = 0;
    lc.listsize = la.length+lb.length+1;
    for (int i = 0; i < la.length; i++) {
        elemtype* q = &(lc.elem[lc.length]);
        for (elemtype* p = &(lc.elem[lc.length-1]); p >= q; --p) *(p+1) = *p;
        *q = la.elem[i];
        ++lc.length;
    }
    for (int i = 0; i < lb.length; i++) {
        bool flag = true;
        for (int j = 0; j < lc.length; j++) {
            if (lc.elem[j] == lb.elem[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            elemtype* q = &(lc.elem[lc.length]);
            for (elemtype* p = &(lc.elem[lc.length-1]); p >= q; --p) *(p+1) = *p;
            *q = lb.elem[i];
            ++lc.length;
        }
    }
    return ok;
}

status intersect_set(sqlist la, sqlist lb, sqlist &lc) {
    lc.elem = (elemtype*)malloc(list_init_size*sizeof(elemtype));
    if (!lc.elem) return error;
    lc.length = 0;
    lc.listsize = list_init_size;
    for (int i = 0; i < la.length; i++) {
        int pos = 0;
        for (int j = 0; j < lb.length; j++) {
            if (lb.elem[j] == la.elem[i]) {
                pos = j+1;
                break;
            }
        }
        if (pos) {
                elemtype* q = &(lc.elem[lc.length]);
                for (elemtype* p = &(lc.elem[lc.length-1]); p >= q; --p) *(p+1) = *p;
                *q = la.elem[i];
                ++lc.length;
            }
        }
    return ok;
}

status merglist(sqlist la,sqlist lb,sqlist &lc) {
    int i = 0, j = 0;
    if (!lc.length) lc.length = 0;
    elemtype* newbase = (elemtype*)realloc(lc.elem, (la.length+lb.length+1)*sizeof(elemtype));
    if (!newbase) return error;
    lc.elem = newbase;
    lc.listsize = la.length + lb.length+1;
    while (i < la.length && j < lb.length) {
        if (la.elem[i] <= lb.elem[j]) lc.elem[lc.length++] = la.elem[i++];
        else lc.elem[lc.length++] = lb.elem[j++];
    }
    while (i < la.length) lc.elem[lc.length++] = la.elem[i++];
    while (j < lb.length) lc.elem[lc.length++] = lb.elem[j++];
    return ok;
}

long reverse(long x) {
    long rever = 0;
    while (x) {
        rever += x%10;
        rever *= 10;
        x /= 10;
    }
    return rever/10;
}

bool is_palindrome(long x) {
    long rever = reverse(x);
    if (x == rever) return true;
    return false;
}

int main(int argc, char** argv) {
  sqlist l;elemtype e;

  initlist(l);

  inputlist(l);

  scanf("%d",&e);

  orderlistinsert(l,e);

  listtraverse(l);

  destroylist(l);

  return 0;
}