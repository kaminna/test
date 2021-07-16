#include <cstdio>
int main(int argc, char** argv) {
	double var;
	scanf("%lf", &var);
	if (var >= 0) {
		printf("%.2lf", var);
	}
	else {
		printf("%.2lf", -var);
	}
	return 0;
}