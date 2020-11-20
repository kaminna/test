#include<stdio.h>
void reverse(char ch,int n)
{
	scanf("%c",&ch);
	if(n==1)
		;
	else
		reverse(ch,n-1);
	printf("%c",ch);
}
int main(void)
{
	char ch='a';
	reverse(ch,5);
	printf("\n");
	return 0;
}
