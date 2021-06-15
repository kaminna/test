#include <stdio.h>
int main(int argc, char** argv) {
	int i, n, x;
	scanf("%d%d", &n, &x);
	int cnt = 0;
	for (i = 1; i <= n; i++) {
		int j = i;
		while(j) {
			if (j % 10 == x) {
				cnt++;
			}
			j/=10;
		}
	}
	printf("%d", cnt);
	return 0;
}

