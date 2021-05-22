#include <stdio.h>
void inverse(int n) {
	if (n != 0) {
		inverse(n/8);
		printf("%d", n % 8);
	}
}
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	if (n == 0) {
		printf("0");
		return 0;
	}
	while (n < 0) {
		printf("Error!\n");
		scanf("%d", &n);
	}
	inverse(n);
	return 0;
}