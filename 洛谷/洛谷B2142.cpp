#include <cstdio>
int f(int n) {
	if (n == 1) {
		return 1;
	}
	return n + f(n - 1);
}
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}