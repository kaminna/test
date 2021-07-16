#include <cstdio>
int main(int argc, char** argv) {
	double x;
	scanf("%lf", &x);
	if (x >= 0) {
		if (x < 5) {
			printf("%.3lf", -x + 2.5);
		}
		else if (x < 10) {
			printf("%.3lf", 2 - 1.5*(x - 3)*(x - 3));
		}
		else if (x < 20) {
			printf("%.3lf", x / 2 - 1.5);
		}
	}
	return 0;
}