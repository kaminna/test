#include <cstdio>
int main(int argc, char** argv) {
	int x, y, a, b;
	scanf("%d%d%d%d", &x, &a, &y, &b);
	double res;
	res = 1.0*(b*y - a * x) / (b - a);
	printf("%.2lf", res);
	return 0;
}