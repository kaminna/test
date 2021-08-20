#include <cstdio>
#define PI 3.1415927
int main(int argc, char** argv) {
	double r;
	while (scanf("%lf", &r) == 1) {
		printf("%.3lf\n", 4.0 / 3.0 * PI*r*r*r);
	}
	return 0;
}