#include  <stdio.h>
#include  <stdlib.h>

int  round;        //  round��¼key�������е�Ԫ�ضԱ��˶��ٴΡ�  

int  compare(const  void  *value1, const  void  *value2) {
	//  qsortҪ���compare����ʹ�ã�compare�����ж���С�Ĺ���  
	//  ���򣨷��ظ�ֵ��  
	return  (*(int*)value1 - *(int*)value2);
	//  ���򣨷�����ֵ��
	//return  (*(int*)value2  -  *(int*)value1);
}

int  bin_search(int  *a, int  n, int  key) {
	//�۰����  //���ҳɹ�������mid��  ���򣬸��ݱȶԽ������ǰ�������в��ң��ں�������в��ҡ�    
	//��¼key�������е�Ԫ�ضԱȴ�����
	//key����A[]�У��򷵻�-1��    
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
	int  *A = (int  *)malloc(N * sizeof(int));//���嶯̬����  �൱��int  a[n]
	int  i;
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);          //  ��������ҵ�����  

//������ϵͳ����qsort���򣬽�����A����������飻
//qsort��������4��������1����˭����2���Ŷ��ٸ�Ԫ�أ�
//3������Ԫ�صĴ洢������4����С����ж�������compare����ʵ�֣���  
	qsort(A, N, sizeof(int), compare);

	int  key;
	scanf("%d", &key);

	round = 0;
	int  position;
	position = bin_search(A, N, key);          //�۰���ң����ظ�Ԫ���������е��±�.

	printf("The  contents  of  the  Array  A  are:");
	for (i = 0; i < N; i++)
		printf("  %d", A[i]);        //��ʾ����A�е����ݡ�  
	printf("\n");

	printf("The  compare  operation  was  performed  %d  times  in  the  bin_search.\n", round);

	if (position != -1)  //���ҳɹ���  
		printf("%d  is  at  the  %dth  unit  is  array  A.\n", key, position);
	else
		printf("There  is  no  %d  in  array  A.\n", key);  //����ʧ�ܡ�  

	return  0;
}