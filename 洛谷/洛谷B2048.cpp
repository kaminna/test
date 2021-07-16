#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int x, res = 8;
	char c;
	scanf("%d %c", &x, &c);
	if (c == 'y') {
		res += 5;
	}
	if (x > 1000) {
		x -= 1000;
		res += ceil(x / 500.0) * 4;
	}
	printf("%d", res);
	return 0;
}