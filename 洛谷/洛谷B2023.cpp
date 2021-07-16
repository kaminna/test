#include <cstdio>
int main(int argc, char** argv) {
	char c;
	int n;
	float f;
	double df;
	scanf("%c%d%f%lf", &c, &n, &f, &df);
	printf("%c %d %f %lf", c, n, f, df);
	return 0;
}