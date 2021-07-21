#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int n, t;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		t = i - 1;
		for (int j = 2; j <= (int)sqrt(i); j++) {
			if (i % j == 0) {
				t -= j;
				t -= i / j;
			}
		}
		if (t == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}