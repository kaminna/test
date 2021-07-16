#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	double x1, x2, x3, y1, y2, y3;
	double h, w;
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	if (x1 == x2) {
		h = abs(y1 - y2);
	}
	else if (x1 == x3) {
		h = abs(y1 - y3);
	}
	else {
		h = abs(y2 - y3);
	}
	if (y1 == y2) {
		w = abs(x1 - x2);
	}
	else if (y1 == y3) {
		w = abs(x1 - x3);
	}
	else {
		w = abs(x2 - x3);
	}
	printf("%.2lf", h*w / 2.0);
	return 0;
}