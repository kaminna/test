//  线性表的顺序存储实现
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
{        //  0  初始化  
	L.elem = (elemtype*)malloc(sizeof(elemtype) * listinitsize);
	if (L.elem == NULL) {
		return error;
	}
	L.length = 0;
	L.listsize = listinitsize;
	return ok;
}

status  listinsert(sqlist  &L, int  i, elemtype  e)
{            //  1  插入  
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
{          //  2  遍历  
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
{        //  3  取数据
	if (i > L.length || i < 1) {
		return error;
	}
	e = L.elem[i - 1];
	return ok;
}

int  locateelem(sqlist  L, elemtype    e)
{    //  4  定位  
	for (int i = 0; i < L.length; i++) {
		if (L.elem[i] == e) {
			return i + 1;
		}
	}
	return 0;
}

status  listdelete(sqlist  &L, int  i, elemtype  &e)
{      //  5  删除  
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
{          //  6  注销  
	free(L.elem);
	return ok;
}

int  main()
{          //  线性表的顺序存储实现
	elemtype  e;
	sqlist  L;

	int  TestCase;
	scanf("%d", &TestCase);

	printf("(1)初始化线性表L：\n");
	initlist(L);

	printf("(2)依次在线性表L尾插入字符a,b,c,d,e：\n");
	listinsert(L, 1, 'a');
	listinsert(L, 2, 'b');
	listinsert(L, 3, 'c');
	listinsert(L, 4, 'd');
	listinsert(L, 5, 'e');
	printf("(3)在线性表L的第2个位置之前插入字符f：\n");
	listinsert(L, 2, 'f');

	switch (TestCase) {
	case  1:                //  遍历  
		printf("(4)输出线性表L：\n");
		listtraverse(L);
		break;

	case  2:                //  取元素  
		printf("(5)输出线性表L的第3个元素：");
		getelem(L, 3, e);
		printf("%c\n", e);
		break;

	case  3:                //  定位  
		printf("(6)输出元素d在线性表L的位置：%d\n", locateelem(L, 'd'));
		break;

	case  4:                //  删除  
		printf("(7)删除线性表L的第4个元素：\n");
		listdelete(L, 4, e);
		printf("(8)输出线性表L：\n");
		listtraverse(L);
		break;

	default:        //  综合  （遍历、取数、定位、删除、遍历）  
		printf("(4)输出线性表L：\n");
		listtraverse(L);

		printf("(5)输出线性表L的第3个元素：");
		getelem(L, 3, e);
		printf("%c\n", e);

		printf("(6)输出元素d在线性表L的位置：%d\n", locateelem(L, 'd'));

		printf("(7)删除线性表L的第4个元素：\n");
		listdelete(L, 4, e);

		printf("(8)输出线性表L：\n");
		listtraverse(L);
	}

	printf("(9)释放线性表L。\n");
	destroylist(L);

	return  ok;
}
