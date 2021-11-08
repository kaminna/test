#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  int nums[1001];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (nums[i] == 0 && nums[j]) {
        nums[i] = nums[j];
        nums[j] = 0;
        break;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", nums[i]);
  }
  return 0;
}