#include <cstdio>
int main(int argc, char** argv) {
	int n, res = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		res += i;
	}
	printf("%d", res);
	return 0;
}