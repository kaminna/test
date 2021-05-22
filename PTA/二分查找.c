#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
	ElementType Data[MAXSIZE];
	Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

List ReadInput(); /* ����ʵ�֣�ϸ�ڲ���Ԫ�ش��±�1��ʼ�洢 */
Position BinarySearch(List L, ElementType X);

int main()
{
	List L = malloc(sizeof(List));
	ElementType X;
	Position P;
	L->Data[0] = 0;
	L->Data[1] = 12;
	L->Data[2] = 31;
	L->Data[3] = 55;
	L->Data[4] = 89;
	L->Data[5] = 101;
	L->Last = 5;
	X = 31;
	P = BinarySearch(L, X);
	printf("%d\n", P);

	return 0;
}
Position BinarySearch(List L, ElementType X) {
	Position left = 1, right = L->Last;
	Position mid = (left + right) / 2;
	while (left < right) {
		if (L->Data[mid] == X) {
			return mid;
		}
		else if (L->Data[mid] > X) {
			right = mid - 1;
		}
		else if (L->Data[mid] < X) {
			left = mid + 1;
		}
	}
	return NotFound;
}
/*
5
12 31 55 89 101
31
*/