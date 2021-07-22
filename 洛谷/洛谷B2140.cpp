#include <cstdio>
int main(int argc, char** argv) {
	int n, cnt = 0, cntA = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int t = i;
		while (t) {
			if (t & 1) {
				cnt++;
			}
			else {
				cnt--;
			}
			t >>=  1;
		}
		if (cnt > 0) {
			cntA++;
		}
		cnt = 0;
	}
	printf("%d %d", cntA, n - cntA);
	return 0;
}