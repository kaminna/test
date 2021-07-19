#include <cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	while (n != 1) {
		if (n & 1) {
			printf("%d*3+1=%d\n", n, 3 * n + 1);
			n = 3 * n + 1;
		}
		else {
			printf("%d/2=%d\n", n, n / 2);
			n /= 2;
		}
	}
	printf("End");
	return 0;
}