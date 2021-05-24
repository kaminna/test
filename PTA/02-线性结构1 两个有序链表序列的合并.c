#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
	ElementType Data;
	PtrToNode   Next;
};
typedef PtrToNode List;
List Read();
void Print(List L);
List Merge(List L1, List L2);
int main(int argc, char** argv) {
	List L1, L2, L;
	L1 = Read();
	L2 = Read();
	L = Merge(L1, L2);
	Print(L);
	Print(L1);
	Print(L2);
	return 0;
}

List Read() {
	List Head = malloc(sizeof(List));
	Head->Next = NULL;
	List H = Head;
	int n;
	scanf("%d", &n);
	while (n--) {
		List L = malloc(sizeof(List));
		scanf("%d", &L->Data);
		L->Next = H->Next;
		H->Next = L;
		H = L;
	}
	return Head;
}

void Print(List L) {
	L = L->Next;
	if (L == NULL) {
		printf("NULL");
	}
	while (L) {
		printf("%d ", L->Data);
		L = L->Next;
	}
	printf("\n");
}

List Merge(List L1, List L2) {
	List p = L1, q = L2;
	p = p->Next;
	q = q->Next;
	List Head = malloc(sizeof(List));
	Head->Next = NULL;
	List H = Head, L;
	while (p && q ) {
		L = malloc(sizeof(List));
		if (p->Data >= q->Data) {
			L->Data = q->Data;
			q = q->Next;
		}
		else {
			L->Data = p->Data;
			p = p ->Next;
		}
		L->Next = H->Next;
		H->Next = L;
		H = L;
	}
	while (p) {
		L = malloc(sizeof(List));
		L->Data = p->Data;
		L->Next = H->Next;
		H->Next = L;
		H = L;
		p = p->Next;
	}
	while (q) {
		L = malloc(sizeof(List));
		L->Data = q->Data;
		L->Next = H->Next;
		H->Next = L;
		H = L;
		q = q->Next;
	}
	L1->Next = NULL;
	L2->Next = NULL;
	return Head;
}