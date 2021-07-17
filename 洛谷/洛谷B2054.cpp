#include <cstdio>
int main(int argc, char** argv) {
	int age, n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &age);
		sum += age;
	}
	printf("%.2lf", (double)1.0 * sum / n);
	return 0;
}