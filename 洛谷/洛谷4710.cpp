#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	double v, angle;
	scanf("%lf%lf", &v, &angle);
	printf("%.15lf %.15lf", v * sin(angle) * v * cos(angle) / 10, 5 * v * cos(angle) / 10 * v * cos(angle) / 10);
	return 0;
}