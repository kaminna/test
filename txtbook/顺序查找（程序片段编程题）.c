#include  <stdio.h>
#include  <stdlib.h>

int  round;        //  round��¼key�������е�Ԫ�ضԱ��˶��ٴΡ�

int  sequence_search(int  *a, int  n, int  key) {
	//˳�����
	  //������ҵ�key�򷵻���A[]�еı�ţ����򷵻�-1��        
	//��¼key�������е�Ԫ�ضԱ��˶��ٴΡ�  
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
	int  *A = (int  *)malloc(N * sizeof(int));//���嶯̬����  �൱��int  a[n]
	int  i;
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);          //  ��������ҵ�����  
	int  key;
	scanf("%d", &key);

	round = 0;
	int  position;
	position = sequence_search(A, N, key);          //�۰���ң����ظ�Ԫ���������е��±�.

	printf("The  contents  of  the  Array  A  are:");
	for (i = 0; i < N; i++)
		printf("  %d", A[i]);        //��ʾ����A�е����ݡ�  
	printf("\n");

	printf("The  compare  operation  was  performed  %d  times  in  the  sequence_search.\n", round);

	if (position != -1)  //���ҳɹ���  
		printf("%d  is  at  the  %dth  unit  is  array  A.\n  ", key, position);
	else
		printf("There  is  no  %d  in  array  A.\n", key);  //����ʧ�ܡ�

	return  0;
}