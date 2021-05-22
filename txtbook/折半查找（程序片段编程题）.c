#include  <stdio.h>
#include  <stdlib.h>

int  round;        //  round记录key和数组中的元素对比了多少次。  

int  compare(const  void  *value1, const  void  *value2) {
	//  qsort要结合compare进行使用，compare定义判定大小的规则。  
	//  升序（返回负值）  
	return  (*(int*)value1 - *(int*)value2);
	//  降序（返回正值）
	//return  (*(int*)value2  -  *(int*)value1);
}

int  bin_search(int  *a, int  n, int  key) {
	//折半查找  //查找成功，返回mid。  否则，根据比对结果，在前半序列中查找，在后半序列中查找。    
	//记录key和数组中的元素对比次数。
	//key不在A[]中，则返回-1。    
	int  low, high, mid;
	low = 0;
	high = n - 1;

	while (low <= high) {
		mid = low + (high - low) / 2;
		if (a[mid] == key) {
			round++;
			return mid;
		}
		if (a[mid] > key) {
			round++;
			high = mid - 1;
		}
		if (a[mid] < key) {
			round++;
			low = mid + 1;
		}
	}
	return  -1;
}

int  main()
{
	int  N;
	scanf("%d", &N);
	int  *A = (int  *)malloc(N * sizeof(int));//定义动态数组  相当于int  a[n]
	int  i;
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);          //  输入待查找的数列  

//先利用系统函数qsort排序，将数组A变成有序数组；
//qsort函数包含4个参数：1、对谁排序；2、排多少个元素；
//3、单个元素的存储容量；4、大小如何判定（调用compare函数实现）。  
	qsort(A, N, sizeof(int), compare);

	int  key;
	scanf("%d", &key);

	round = 0;
	int  position;
	position = bin_search(A, N, key);          //折半查找，返回该元素在数组中的下标.

	printf("The  contents  of  the  Array  A  are:");
	for (i = 0; i < N; i++)
		printf("  %d", A[i]);        //显示数组A中的内容。  
	printf("\n");

	printf("The  compare  operation  was  performed  %d  times  in  the  bin_search.\n", round);

	if (position != -1)  //查找成功。  
		printf("%d  is  at  the  %dth  unit  is  array  A.\n", key, position);
	else
		printf("There  is  no  %d  in  array  A.\n", key);  //查找失败。  

	return  0;
}