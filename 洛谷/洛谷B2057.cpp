#include <cstdio>
int main(int argc, char** argv) {
	int n, score, max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score);
		if (score > max) {
			max = score;
		}
	}
	printf("%d", max);
	return 0;
}