#include  <stdio.h>
#include  <stdlib.h>

int  round;        //  round记录key和数组中的元素对比了多少次。

int  sequence_search(int  *a, int  n, int  key) {
	//顺序查找
	  //如果查找到key则返回在A[]中的编号，否则返回-1。        
	//记录key和数组中的元素对比了多少次。  
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			round++;
			return i;
		}
		round++;
	}
	return -1;
}

int  main()
{
	int  N;
	scanf("%d", &N);
	int  *A = (int  *)malloc(N * sizeof(int));//定义动态数组  相当于int  a[n]
	int  i;
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);          //  输入待查找的数列  
	int  key;
	scanf("%d", &key);

	round = 0;
	int  position;
	position = sequence_search(A, N, key);          //折半查找，返回该元素在数组中的下标.

	printf("The  contents  of  the  Array  A  are:");
	for (i = 0; i < N; i++)
		printf("  %d", A[i]);        //显示数组A中的内容。  
	printf("\n");

	printf("The  compare  operation  was  performed  %d  times  in  the  sequence_search.\n", round);

	if (position != -1)  //查找成功。  
		printf("%d  is  at  the  %dth  unit  is  array  A.\n  ", key, position);
	else
		printf("There  is  no  %d  in  array  A.\n", key);  //查找失败。

	return  0;
}