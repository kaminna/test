#include <cstdio>
int main(int argc, char** argv) {
	double r, pi = 3.14159;
	scanf("%lf", &r);
	printf("%.4lf %.4lf %.4lf", 2.0 * r, 2.0*r*pi, r*r*pi);
	return 0;
}