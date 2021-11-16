#include <cstdio>
#include <cstdlib>
#define OK 1
#define ERROR 0
typedef int Status;
typedef int SElemType;
typedef struct SNode {
    SElemType data;
    struct SNode *next;
}*LinkStack, SNode;

Status InitStack(LinkStack &S) {
    S = (LinkStack)malloc(sizeof(SNode));
    if (!S) return ERROR;
    S->next = NULL;
    return OK;
}

Status DestroyStack(LinkStack &S) {
    LinkStack p = S, q = S->next;
    while (p) {
        free(p);
        if (p) return ERROR;
        p = q;
        q = q->next;
    }
    return OK;
}

Status Push(LinkStack &S, SElemType e) {
    LinkStack tmp = (LinkStack)malloc(sizeof(SNode));
    if (!tmp) return ERROR;
    tmp->data = e;
    tmp->next = S->next;
    S->next = tmp;
    return OK;
}

Status Pop(LinkStack &S, SElemType &e) {
    LinkStack tmp = S->next;
    e = tmp->data;
    S->next = tmp->next;
    free(tmp);
    if (tmp) return ERROR;
    return OK;
}

bool StackEmpty(LinkStack S) {
    return S->next ? false : true;
}

int StackLength(LinkStack S) {
    int cnt = 0;
    LinkStack p = S->next;
    while (p) {
        cnt++;
        p = p->next;
    }
    return cnt;
}

Status GetTop(LinkStack S, SElemType &e) {
    if (!S->next) return ERROR;
    e = S->next->data;
    return OK;
}

int main(int argc, char** argv) {
    LinkStack S;
    InitStack(S);
    int n;
    scanf("%d", &n);
    while (n--) {
        SElemType nums;
        scanf("%d", &nums);
        Push(S, nums);
    }
    printf("%d\n", StackLength(S));
    while (!StackEmpty(S)) {
        SElemType e;
        Pop(S, e);
        printf("%d ", e);
    }
    DestroyStack(S);
    return 0;
}