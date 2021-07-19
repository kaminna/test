#include <cstdio>
int main(int argc, char** argv) {
	int a, b, c, cnt = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (int x = 0; x <= c / a; x++) {
		for (int y = 0; y <= c / b; y++) {
			if (a*x + b * y == c) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}