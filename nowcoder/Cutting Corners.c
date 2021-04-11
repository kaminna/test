#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
	double result;
	int w, h;
	scanf("%d%d", &w, &h);
	result = w + h - pow(w*w + h * h, 0.5);
	printf("%lf", result);
	return 0;
}