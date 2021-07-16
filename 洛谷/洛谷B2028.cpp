#include <cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	printf("%d", n % 10);
	printf("%d", n / 10 % 10);
	printf("%d", n / 100);
	return 0;
}