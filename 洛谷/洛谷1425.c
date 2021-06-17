#include <stdio.h>
int main(int argc, char** argv) {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int min1, min2, di;
	min1 = a * 60 + b;
	min2 = c * 60 + d;
	if (min1 > min2) {
		di = min2 + 1440 - min1;
	}
	else {
		di = min2 - min1;
	}
	printf("%d %d", di/60, di%60);
	return 0;
}

