#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int d = b * b - 4 * a * c;
	double res1 = (1.0 * -b + sqrt(d)) / (2 * a);
	double res2 = (1.0 * -b - sqrt(d)) / (2 * a);
	if (d == 0) {
		if (res1 - (int)res1 == 0) {
			printf("%d\n", (int)res1);
		}
		else {
		printf("%.2lf\n", res1);
		}
	}
	else if (d > 0) {
		if (res1 - (int)res1 == 0) {
			printf("%d\n", (int)res1);
		}
		else {
			printf("%.2lf\n", res1);
		}
		if (res2 - (int)res2 == 0) {
			printf("%d\n", (int)res2);
		}
		else {
			printf("%.2lf\n", res2);
		}
	}
	return 0;
}

