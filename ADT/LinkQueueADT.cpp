#include <cstdio>
#include <cstdlib>
#define OK 1
#define ERROR 0
typedef int Status;
typedef int QElemType;
typedef struct QNode {
    QElemType data;
    struct QNode *next;
}QNode, *QueuePtr;
typedef struct {
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;
Status InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
    if (!Q.front) return ERROR;
    Q.front->next = NULL;
    return OK;
}
Status DestroyQueue(LinkQueue &Q) {
    while (Q.front) {
        Q.rear = Q.front->next;
        free(Q.front);
        Q.front = Q.rear;
    }
    return OK;
}
Status ClearQueue(LinkQueue &Q) {
    Q.rear = Q.front->next;
    while (Q.rear) {    
        Q.front->next = Q.rear->next;
        free(Q.rear);
        Q.rear = Q.front->next;
    }
    Q.rear = Q.front;
    return OK;
}
bool QueueEmpty(LinkQueue Q) {
    return Q.front == Q.rear ? true : false;
}
int QueueLength(LinkQueue Q) {
    int cnt = 0;
    QueuePtr p = Q.front->next;
    while (p) {
        p = p->next;
        cnt++;
    }
    return cnt;
}
Status GetHead(LinkQueue &Q, QElemType &e) {
    if (Q.front == Q.rear) return ERROR;
    e = Q.front->next->data;
    return OK;
}
Status EnQueue(LinkQueue &Q, QElemType e) {
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    if (!p) return ERROR;
    p->data = e;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return OK;
}
Status DeQueue(LinkQueue &Q, QElemType &e) {
    if (Q.front == Q.rear) return ERROR;
    QueuePtr p = Q.front->next;
    e = p->data;
    Q.front->next = p->next;
    if (Q.rear == p) Q.rear = Q.front;
    free(p);
    return OK;
}
Status QueueTraverse(LinkQueue Q) {
    QueuePtr p = Q.front->next;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    return OK;
}
int LocateElem(LinkQueue Q, QElemType e) {
    QueuePtr p = Q.front->next;
    int cnt = 1;
    while (p) {
        if (p->data == e) {
            return cnt;
        }
        p = p->next;
        cnt++;
    }
    return 0;
}
int main(int argc, char** argv) {
    int n, m, cnt = 0;
    QElemType a, e;
    LinkQueue Q;
    InitQueue(Q);
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (QueueLength(Q) < m && !LocateElem(Q, a)) {
            cnt++;
            EnQueue(Q, a);
        }
        else {
            if (!LocateElem(Q, a)) {
                cnt++;
                DeQueue(Q, e);
                EnQueue(Q, a);
            }
        }
    }
    printf("%d", cnt);
    DestroyQueue(Q);
    return 0;
}