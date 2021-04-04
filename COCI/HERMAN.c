#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	const double pi = acos(-1);
	int r;
	double area;
	scanf("%d", &r);
	area = r * r * 2;
	printf("%lf\n%lf", pi*r*r, area);
	return 0;
}