#include<stdio.h>
int main(void)
{
  int a,b,c,max,a1,b1,c1;
  a1=a;b1=b;c1=c;
  scanf("请输入三个数：%d%d%d",&a,&b,&c);
  max=a<b?b:a;
  if(max<c)
  {
    max=c;
  }
  printf("%d,%d,%d这三个数中最大的数为：%d",a1,b1,c1,max);
  return 0;
}
