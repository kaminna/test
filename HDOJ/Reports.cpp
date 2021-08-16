#include <cstdio>
int main(int argc, char** argv) {
	int T, n, a, t;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		int ans = 0, flag = 1;
		scanf("%d", &t);
		while (--n) {
			scanf("%d", &a);
			if (t == a) {
				flag = 0;
			}
			else {
				t = a;
			}
		}
		if (flag) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}