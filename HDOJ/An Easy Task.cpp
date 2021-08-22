#include <cstdio>
int main(int argc, char** argv) {
	int T, Y, N;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &Y, &N);
		while (N) {
			if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {
				N--;
			}
			Y++;
		}
		printf("%d\n", Y-1);
	}
	return 0;
}