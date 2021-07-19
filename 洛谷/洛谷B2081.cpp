#include <cstdio>
int main(int argc, char** argv) {
	int n, ans = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 7 != 0 && i % 10 != 7 && i / 10 % 10 != 7) {
			ans += i * i;
		}
	}
	printf("%d", ans);
	return 0;
}