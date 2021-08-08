#include <stdio.h>
int main(int argc, char** argv) {
	int lower, upper, flag = 0;
	scanf("%d%d", &lower, &upper);
	if (lower <= upper) {
		printf("fahr celsius\n");
		for (int i = lower; i <= upper; i += 2) {
			if (flag) {
				printf("\n");
			}
			printf("%d%6.1f", i, (i - 32)*5.0 / 9.0);
			flag = 1;
		}
	}
	else {
		printf("Invalid.");
	}
	return 0;
}