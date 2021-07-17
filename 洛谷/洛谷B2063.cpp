#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int x, n;
	scanf("%d%d", &x, &n);
	printf("%.4lf", x * pow(1.001, n));
	return 0;
}