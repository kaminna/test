#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  int i = 1;
  while (i <= 100000000) {
    i <<= 1;
    if (i > n) { //加速
      break;
    }
    if (n == i) {
      printf("YES");
      return 0;
    }
  }
  printf("NO");
  return 0;
}