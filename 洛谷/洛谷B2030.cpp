#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int x1, x2, y1, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	printf("%.3lf", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
	return 0;
}