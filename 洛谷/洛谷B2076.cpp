#include <cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	double ans = 0, temp = n;
	for (int i = 1; i <= 10; i++) {
		ans += temp;
		temp /= 2;
		ans += temp;
	}
	printf("%g\n%g", ans - temp, temp);
	return 0;
}