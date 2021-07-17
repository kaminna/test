#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	double a, b, c, root, x1, x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	root = b * b - 4 * a*c;
	if (root < 0) {
		printf("No answer!");
	}
	else if (root == 0) {
		x1 = -b / (2 * a);
		printf("x1=x2=%.5lf", x1);
	}
	else {
		x1 = (-b - sqrt(root)) / (2 * a);
		x2 = (-b + sqrt(root)) / (2 * a);
		if (x1 > x2) {
			double temp = x1;
			x1 = x2;
			x2 = temp;
		}
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}
	return 0;
}