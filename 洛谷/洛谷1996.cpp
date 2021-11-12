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

bool QueueEmpty(LinkQueue Q) {
    return Q.front == Q.rear ? true : false;
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

int main(int argc, char** argv) {
    LinkQueue Q;
    QElemType e;
    InitQueue(Q);
    int n, m, flag = 1;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        EnQueue(Q, i);
    }
    while (!QueueEmpty(Q)) {
        if (flag != m) {
            DeQueue(Q, e);
            EnQueue(Q, e);
            flag++;
        }
        else {
            DeQueue(Q, e);
            printf("%d ", e);
            flag = 1;
        }
    }
    DestroyQueue(Q);
    return 0;
}