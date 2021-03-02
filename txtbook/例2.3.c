#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x = 6, y;
	printf("x=%d\n", x);
	y = ++x;
	printf("y=++x:x=%4d,y=%4d\n", x, y);
	y = x--;
	printf("y=x--:x=%d,y=%d\n", x, y);
	system("pause");
	return 0;
}
