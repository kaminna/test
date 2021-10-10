#include <cstdio>
#include <cstdlib>
#define ok 1
#define error 0
typedef int status;
typedef int elemtype;
typedef struct LNode
{
    elemtype data;
    struct LNode *next;
}LNode, *linklist;

status initlist(linklist &L) {
    L = (linklist)malloc(sizeof(LNode));
    if (!L) return error;
    L->next = NULL;
    return ok;
}

status inputlist(linklist &L) {
    int n;
    linklist p = L;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        linklist q = (linklist)malloc(sizeof(LNode));
        if (!q) return error;
        scanf("%d", &q->data);
        p->next = q;
        p = q;
    }
    p->next = NULL;
    return ok;
}

status listtraverse(linklist L) {
    linklist p = L->next;
    int cnt = 0;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
        cnt++;
    }
    printf("\n%d", cnt);
    return ok;
}

status destroylist(linklist &L) {
    linklist p = L, q = L;
    while (q) {
        free(p);
        if (p) return error;
        q = q->next;
        p = q;
    }
    return ok;
}

bool listempty(linklist L) {
    if (L->next) return false;
    return true;
}

int listlength(linklist L) {
    int cnt = 0;
    linklist p = L->next;
    while (p) {
        cnt++;
        p = p->next;
    }
    return cnt;
}

status getelem(linklist l,int i, elemtype &e) {
    if (i < 1) return error;
    int cnt = 1;
    linklist p = l->next;
    while (cnt < i && p) {
        p = p->next;
        cnt++;
    }
    if (!p) return error;
    e = p->data;
    return ok;
}

int locateelem(linklist l,elemtype e) {
    linklist p = l->next;
    int cnt = 1;
    while (p) {
        if (p->data == e) {
            return cnt;
        }
        cnt++;
        p = p->next;
    }
    return 0;
}

status listinsert(linklist &l,int i,elemtype e) {
    if(i<1) return error;
    linklist p = l;
    int cnt = 0;
    while (cnt < i-1 && p) {
        p = p->next;
        cnt++;
    }
    if(!p && cnt < i) return error;
    linklist q = (linklist)malloc(sizeof(LNode));
    if (!q) return error;
    q->data = e;
    q->next = p->next;
    p->next = q;
    return ok;
}

status listdelete(linklist &l,int i,elemtype &e) {
    if (i < 1) return error;
    linklist p = l;
    int cnt = 0;
    while (p && cnt < i-1) {
        p = p->next;
        cnt++;
    }
    if (!p->next) return error;
    linklist q = p->next;
    e = q->data;
    p->next=q->next;
    free(q);
    if (!q) return error;
    return ok;
}

status  intersect_set(linklist la,linklist lb,linklist  &lc) {
    lc = (linklist)malloc(sizeof(LNode));
    if (!lc) return error;
    linklist p = la->next, r = lc;
    while (p) {
        linklist q = lb->next;
        while (q)
        {
            if (p->data == q->data) {
                linklist tmp = (linklist)malloc(sizeof(LNode));
                if(!tmp) return error;
                tmp->data = p->data;
                r->next = tmp;
                r = r->next;
            }
            q = q->next;
        }
        p = p->next;
    }
    r->next = NULL;
    return ok;
}

status union_set(linklist la,linklist lb,linklist  &lc) {
    lc = (linklist)malloc(sizeof(LNode));
    if (!lc) return error;
    linklist p = la->next, r = lc;
    while (p) {
        linklist tmp = (linklist)malloc(sizeof(LNode));
        if(!tmp) return error;
        tmp->data = p->data;
        r->next = tmp;
        r = r->next;
        p = p->next;
    }
    linklist q = lb->next;
    while (q) {
        bool flag = true;
        p = la->next;
        while (p) {
            if (q->data == p->data) {
                flag = false;
                break;
            }
            p = p->next;
        }
        if (flag) {
            linklist tmp = (linklist)malloc(sizeof(LNode));
            if(!tmp) return error;
            tmp->data = q->data;
            r->next = tmp;
            r = r->next;
        }
        q = q->next;
    }
    r->next = NULL;
    return ok;
}

status listmax(linklist l,elemtype &max) {
    linklist p = l->next;
    max = p->data;
    while (p) {
        if (p->data > max) {
            max = p->data;
        }
        p = p->next;
    }
    return ok;
}

status listmin(linklist l,elemtype &min) {
    linklist p = l->next;
    min = p->data;
    while (p) {
        if (p->data < min) {
            min = p->data;
        }
        p = p->next;
    }
    return ok;
}

int countelem(linklist l,elemtype e) {
    linklist p = l->next;
    int cnt = 0;
    while (p) {
        if (p->data == e) cnt++;
        p = p->next;
    }
    return cnt;
}

status orderlistinsert(linklist &l, elemtype e) {
    linklist p = l;
    while (p->next) {
        if (p->next->data >= e) {
            linklist q = (linklist)malloc(sizeof(LNode));
            if (!q) return error;
            q->data = e;
            q->next = p->next;
            p->next = q;
            return ok;
        }
        p = p->next;
    }
    if (p->data < e) {
        linklist q = (linklist)malloc(sizeof(LNode));
        if (!q) return error;
        q->data = e;
        q->next = p->next;
        p->next = q;
    }
    return ok;
}

status listreverse(linklist &l) {
    linklist pre = NULL, cur = l->next;
    while (cur) {
        linklist next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    l->next = pre;
    return ok;
}

status listsort(linklist &l) {
    for (linklist p = l->next; p; p = p->next) {
        linklist min = p;
        for (linklist q = p->next; q; q = q->next) {
            if (q->data < min->data) {
                min = q;
            }
        }
        elemtype tmp = p->data;
        p->data = min->data;
        min->data = tmp;
    }
    return ok;
}

status merglist(linklist la,linklist lb,linklist &lc) {
    lc = (linklist)malloc(sizeof(LNode));
    if (!lc) return error;
    linklist p = la->next, q = lb->next, r = lc;
    while (p && q) {
        if (p->data < q->data) {
            linklist tmp = (linklist)malloc(sizeof(LNode));
            if (!tmp) return error;
            tmp->data = p->data;
            tmp->next = NULL;
            r->next = tmp;
            r = r->next;
            p = p->next;
        }
        else {
            linklist tmp = (linklist)malloc(sizeof(LNode));
            if (!tmp) return error;
            tmp->data = q->data;
            tmp->next = NULL;
            r->next = tmp;
            r = r->next;
            q = q->next;
        }
    }
    while (p) {
        linklist tmp = (linklist)malloc(sizeof(LNode));
        if (!tmp) return error;
        tmp->data = p->data;
        tmp->next = NULL;
        r->next = tmp;
        r = r->next;
        p = p->next;
    }
    while (q) {
        linklist tmp = (linklist)malloc(sizeof(LNode));
        if (!tmp) return error;
        tmp->data = q->data;
        tmp->next = NULL;
        r->next = tmp;
        r = r->next;
        q = q->next;
    }
    return ok;
}

int main(int argc, char** argv) {
  linklist l;

  initlist(l);

  inputlist(l);

  elemtype max,min;

  listmax(l,max);listmin(l,min);

  printf("%d\n%d",max,min);

  destroylist(l);

  return 0;
}
