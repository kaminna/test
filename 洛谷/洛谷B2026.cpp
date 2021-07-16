#include <cstdio>
int main(int argc, char** argv) {
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%g", a - int(a / b) * b);
	return 0;
}