#include <cstdio>
int main(int argc, char** argv) {
	long long n;
	while (scanf("%lld", &n) == 1) {
		if (n >= 0 && n <= 100) {
			if (n < 60) {
				printf("E\n");
			}
			else if (n < 70) {
				printf("D\n");
			}
			else if (n < 80) {
				printf("C\n");
			}
			else if (n < 90) {
				printf("B\n");
			}
			else {
				printf("A\n");
			}
		}
		else {
			printf("Score is error!\n");
		}
	}
	return 0;
}