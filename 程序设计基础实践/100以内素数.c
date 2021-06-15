#include <stdio.h>
int main(int argc, char** argv) {
	int i, j;
	for (i = 2; i <= 100; i++) {
		int flag = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			printf("%d ", i);
		}
	}
	return 0;
}

