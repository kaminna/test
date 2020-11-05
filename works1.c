#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a;
	srand(time(0));
	for (int j = 1; j <= 9; j++)
	{
		for (int i = 1; i <= 8; i++)
		{
			a = rand() % 12 + 1;
			switch (a)
			{
			case 1:
			case 2:
			case 3:printf("红"); break;
			case 4:
			case 5:
			case 6:printf("白"); break;
			default:printf("黑"); break;
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
