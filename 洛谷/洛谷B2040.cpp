#include <cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	if (n > 9 && n < 100) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}