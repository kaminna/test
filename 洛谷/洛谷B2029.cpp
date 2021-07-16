#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int h, r;
	scanf("%d%d", &h, &r);
	double sum = acos(-1) * r * r * h / 1000;
	double res = 20.0 / sum;
	if (res - (int)res) {
		printf("%d", (int)res + 1);
	}
	else {
		printf("%d", (int)res);
	}
	return 0;
}