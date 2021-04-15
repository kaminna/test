//  ���Ա��˳��洢ʵ��
#include  <stdio.h>
#include    <stdlib.h>

#define  ok  1
#define  error  0
#define  listinitsize      50
#define  listincrement  10

typedef  int    status;
typedef  char    elemtype;
typedef  struct {
	elemtype    *elem;
	int  length;
	int  listsize;
}sqlist;

status  initlist(sqlist  &L)
{        //  0  ��ʼ��  
	L.elem = (elemtype*)malloc(sizeof(elemtype) * listinitsize);
	if (L.elem == NULL) {
		return error;
	}
	L.length = 0;
	L.listsize = listinitsize;
	return ok;
}

status  listinsert(sqlist  &L, int  i, elemtype  e)
{            //  1  ����  
	if (L.length == L.listsize) {
		return error;
	}
	for (int p = L.listsize - 1; p >= i - 1; p--) {
		L.elem[p] = L.elem[p - 1];
	}
	L.elem[i - 1] = e;
	L.length++;
	return ok;
}

status    listtraverse(sqlist  L)
{          //  2  ����  
	printf("The length of the sqlist: %d\n", L.length);
	printf("The data of the sqlist:");
	for (int i = 0; i < L.length; i++) {
		printf("%c", L.elem[i]);
		if (i != L.length - 1) {
			printf(" ");
		}
	}
	printf("\n");
	return ok;
}

status      getelem(sqlist  L, int  i, elemtype  &e)
{        //  3  ȡ����
	if (i > L.length || i < 1) {
		return error;
	}
	e = L.elem[i - 1];
	return ok;
}

int  locateelem(sqlist  L, elemtype    e)
{    //  4  ��λ  
	for (int i = 0; i < L.length; i++) {
		if (L.elem[i] == e) {
			return i + 1;
		}
	}
	return 0;
}

status  listdelete(sqlist  &L, int  i, elemtype  &e)
{      //  5  ɾ��  
	if (i < 1 || i > L.listsize) {
		return error;
	}
	e = L.elem[i - 1];
	for (int p = i - 1; p < L.length; p++) {
		L.elem[p] = L.elem[p + 1];
	}
	L.length--;
	return ok;
}

status  destroylist(sqlist  &L)
{          //  6  ע��  
	free(L.elem);
	return ok;
}

int  main()
{          //  ���Ա��˳��洢ʵ��
	elemtype  e;
	sqlist  L;

	int  TestCase;
	scanf("%d", &TestCase);

	printf("(1)��ʼ�����Ա�L��\n");
	initlist(L);

	printf("(2)���������Ա�Lβ�����ַ�a,b,c,d,e��\n");
	listinsert(L, 1, 'a');
	listinsert(L, 2, 'b');
	listinsert(L, 3, 'c');
	listinsert(L, 4, 'd');
	listinsert(L, 5, 'e');
	printf("(3)�����Ա�L�ĵ�2��λ��֮ǰ�����ַ�f��\n");
	listinsert(L, 2, 'f');

	switch (TestCase) {
	case  1:                //  ����  
		printf("(4)������Ա�L��\n");
		listtraverse(L);
		break;

	case  2:                //  ȡԪ��  
		printf("(5)������Ա�L�ĵ�3��Ԫ�أ�");
		getelem(L, 3, e);
		printf("%c\n", e);
		break;

	case  3:                //  ��λ  
		printf("(6)���Ԫ��d�����Ա�L��λ�ã�%d\n", locateelem(L, 'd'));
		break;

	case  4:                //  ɾ��  
		printf("(7)ɾ�����Ա�L�ĵ�4��Ԫ�أ�\n");
		listdelete(L, 4, e);
		printf("(8)������Ա�L��\n");
		listtraverse(L);
		break;

	default:        //  �ۺ�  ��������ȡ������λ��ɾ����������  
		printf("(4)������Ա�L��\n");
		listtraverse(L);

		printf("(5)������Ա�L�ĵ�3��Ԫ�أ�");
		getelem(L, 3, e);
		printf("%c\n", e);

		printf("(6)���Ԫ��d�����Ա�L��λ�ã�%d\n", locateelem(L, 'd'));

		printf("(7)ɾ�����Ա�L�ĵ�4��Ԫ�أ�\n");
		listdelete(L, 4, e);

		printf("(8)������Ա�L��\n");
		listtraverse(L);
	}

	printf("(9)�ͷ����Ա�L��\n");
	destroylist(L);

	return  ok;
}
