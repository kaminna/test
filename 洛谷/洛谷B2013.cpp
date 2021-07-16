#include <cstdio>
int main(int argc, char** argv) {
	double F;
	scanf("%lf", &F);
	printf("%.5lf", 5.0*(F - 32) / 9);
	return 0;
}