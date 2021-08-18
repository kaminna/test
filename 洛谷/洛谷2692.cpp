#include <cstdio>
bool R[5001], C[5001];
int main(int argc, char** argv) {
	long long ans = 0, cnt = 0;
	int N, M, B, G, x, y;
	scanf("%d%d%d%d", &N, &M, &B, &G);
	for (int i = 0; i < B; i++) {
		scanf("%d%d", &x, &y);
		for (int j = x - 1; j < y; j++) {
			if (R[j] == false) {
				R[j] = true;
				ans += M;
				cnt++;
			}
		}
	}
	for (int i = 0; i < G; i++) {
		scanf("%d%d", &x, &y);
		for (int j = x - 1; j < y; j++) {
			if (C[j] == false) {
				C[j] = true;
				ans += N - cnt;
			}
		}
	}
	printf("%lld", ans);
	return 0;
}