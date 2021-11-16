#include <cstdio>
#include <cstdlib>
#define OK 1
#define ERROR 0
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef int Status;
typedef char SElemType;
typedef struct {
    SElemType *base;
    SElemType *top;
    int stacksize;
}SqStack;
Status InitStack (SqStack &S) {
    S.base = (SElemType*)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!S.base) return ERROR;
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    return OK;
}
/*Status InputStack (SqStack &s) {
   int i,n;
    //printf("please input the length of the sqstack:");
    scanf("%d",&n);
    //printf("please input the data of the sqstack:");
    for (i=1;i<=n;i++) {
       scanf(" %d", s.top);
       s.top++;
    }
    return OK;
}*/

/*Status StackTraverse (SqStack s) { 
  int i;
  printf("the length of the stack:%d\n",s.top-s.base);
  printf("the data of the stack:");
  for (i=0;i<=s.top-s.base-1;i++)
        printf("%d  ",s.base[i]);
  printf("\n");
  return OK;
}*/

Status DestroyStack (SqStack &s) { 
    free(s.base);
    s.top=NULL;
    s.stacksize=0;
    return OK;
 }
Status ClearStack (SqStack &S) {
    S.top = S.base;
    return OK;
}
bool StackEmpty (SqStack S) {
    return S.top == S.base ? true : false;
}
int StackLength (SqStack S) {
    return S.top - S.base;
}
Status GetTop (SqStack S, SElemType &e) {
    if (S.top == S.base) return ERROR;
    e = *(S.top-1);
    return OK;
}
Status Push (SqStack &S, SElemType e) {
    if (S.top - S.base >= S.stacksize) {
        S.base = (SElemType*)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(SElemType));
        if (!S.base) return ERROR;
        S.top = S.base + S.stacksize;
        S.stacksize += STACKINCREMENT;
    }
    *S.top++ = e;
    return OK;
}
Status Pop (SqStack &S, SElemType &e) {
    if (S.top == S.base) return ERROR;
    e = *--S.top;
    return OK;
}
int main(int argc, char** argv) {
    SqStack s;
    InitStack(s);
    char c;
    bool flag = true;
    scanf("%c", &c);
    while (c != '#') {
        if (c == '(' || c == '[') {
            Push(s, c);
            flag = false;
        }
        else if (c == ')' || c == ']') {
            if (StackEmpty(s)) {
                flag = false;
                break;
            }
            else {
                SElemType e;
                GetTop(s, e);
                if ((e == '(' && c == ')') || (e == '[' && c == ']')) {
                    Pop(s, e);
                    flag = true;
                }
                else {
                    flag = false;
                    break;
                }
            }
        }
        scanf("%c", &c);
    }
    flag ? printf("ok") : printf("error");
    return 0;
}