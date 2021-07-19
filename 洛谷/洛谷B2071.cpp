#include <cstdio>
int main(int argc, char** argv) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	for (int i = 2; i < 1000000; i++) {
		if (a%i == b%i && c%i == b%i) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}