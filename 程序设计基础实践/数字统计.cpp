#include <cstdio>
int main() {
	int L, R, cnt = 0;
	scanf("%d%d", &L, &R);
	for (int i = L; i <= R; i++) {
		int t = i;
		while (t) {
			if (t % 10 == 2) {
				cnt++;
			}
			t /= 10;
		}
	}
	printf("%d", cnt);
	return 0;
} 

