#include <cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	if (n & 1) {
		printf("odd");
	}
	else {
		printf("even");
	}
	return 0;
}