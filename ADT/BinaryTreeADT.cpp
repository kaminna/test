#include <cstdio>
#include <cstdlib>
#define OK 1
#define ERROR 0
typedef int Status;
typedef char TElemType;
typedef struct BiTNode {
    TElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;
typedef BiTree QElemType;
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
Status InitBiTree(BiTree &T) {
    T = (BiTree)malloc(sizeof(BiTNode));
    if (!T) return ERROR;
    return OK;
}
Status CreateBiTree(BiTree &T) {
    char c;
    scanf("%c", &c);
    if (c == ' ' || c == '\n') {
        T = NULL;
        return OK;
    }
    if (!(T = (BiTree)malloc(sizeof(BiTNode)))) return ERROR;
    T->data = c;
    CreateBiTree(T->lchild);
    CreateBiTree(T->rchild);
    return OK;
}
Status PreOrderTraverse(BiTree T) {
    if (T) {
        printf("%c", T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
    return OK;
}
Status InOrderTraverse(BiTree T) {
    if (T) {
        InOrderTraverse(T->lchild);
        printf("%c", T->data);
        InOrderTraverse(T->rchild);
    }
    return OK;
}
Status PostOrderTraverse(BiTree T) {
    if (T) {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        printf("%c", T->data);
    }
    return OK;
}
Status LevelOrderTraverse(BiTree T) {
    LinkQueue Q;
    InitQueue(Q);
    if (T) EnQueue(Q, T);
    while (!QueueEmpty(Q)) {
        DeQueue(Q, T);
        if (T) printf("%c", T->data);
        if (T->lchild) EnQueue(Q, T->lchild);
        if (T->rchild) EnQueue(Q, T->rchild);
    }
    DestroyQueue(Q);
    return OK;
}
int AllNodes(BiTree T) {
    if (!T) return 0;
    return AllNodes(T->lchild) + AllNodes(T->rchild) + 1;
}
int LeafNodes(BiTree T) {
    if (!T) return 0;
    if (!T->lchild && !T->rchild) return 1;
    return LeafNodes(T->lchild) + LeafNodes(T->rchild);
}
int BiTreeDepth(BiTree T) {
    int left = 0, right = 0;
    if (!T) return 0;
    left = BiTreeDepth(T->lchild) + 1;
    right = BiTreeDepth(T->rchild) + 1;
    return left > right ? left : right;
}
Status LayerNode(BiTree T, TElemType ch, int n, int &Layer) {
    if (!T) return OK;
    if (T->data == ch) {
        Layer = n + 1;
        return OK;
    }
    LayerNode(T->lchild, ch, n+1, Layer);
    LayerNode(T->rchild, ch, n+1, Layer);
    return OK;
}
int GetLevelNodes(BiTree T, int k) {
    if (T) {
        if (k == 1) return 1;
        return GetLevelNodes(T->lchild, k-1) + GetLevelNodes(T->rchild, k-1);
    }
    return 0;
}
Status DestroyBiTree(BiTree &T) {
    if (!T) return OK;
    DestroyBiTree(T->lchild);
    DestroyBiTree(T->rchild);
    free(T);
    return OK;
}
int main(int argc, char** argv) {
    BiTree bt;
    int layer;
    CreateBiTree(bt);
    printf("%d", BiTreeDepth(bt));
    DestroyBiTree(bt);
    return 0;
}
//-+a  *b  -c  d  /e  f  