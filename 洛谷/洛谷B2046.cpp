#include <cstdio>
int main(int argc, char** argv) {
	int n;
	double bike, walk;
	scanf("%d", &n);
	bike = 50 + n / 3.0;
	walk = n / 1.2;
	if (bike < walk) {
		printf("Bike");
	}
	else if (bike > walk) {
		printf("Walk");
	}
	else {
		printf("All");
	}
	return 0;
}