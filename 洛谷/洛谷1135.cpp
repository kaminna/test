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
int k[10000], n, a, b, cnt[10000];
bool visited[10000];
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
void BFS(int m) {
    int tmp = m;
    LinkQueue Q;
    InitQueue(Q);
    if (!visited[m]) {
        visited[m] = true;
        cnt[m] = 0;
        EnQueue(Q, m);
        while (!QueueEmpty(Q)) {
            DeQueue(Q, tmp);
            if (tmp == b) break;
            if (!visited[tmp + k[tmp]] && tmp + k[tmp] <= n) {
                visited[tmp + k[tmp]] = true;
                cnt[tmp + k[tmp]] = cnt[tmp] + 1;
                //printf("%d ", tmp + k[tmp]);
                EnQueue(Q, tmp + k[tmp]);
            }
            if (!visited[tmp - k[tmp]] && tmp - k[tmp] > 0) {
                visited[tmp - k[tmp]] = true;
                cnt[tmp - k[tmp]] = cnt[tmp] + 1;
                //printf("%d ", tmp - k[tmp]);
                EnQueue(Q, tmp - k[tmp]);
            }
        }
    }
    DestroyQueue(Q);
}
int main(int argc, char** argv) {
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &k[i]);
    }
    BFS(a);
    if (a == b || cnt[b]) printf("%d", cnt[b]);
    else printf("-1");
    return 0;
}