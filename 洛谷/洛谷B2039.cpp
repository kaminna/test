#include <cstdio>
int main(int argc, char** argv) {
	long long x, y;
	scanf("%lld%lld", &x, &y);
	if (x > y) {
		printf(">");
	}
	else if (x < y) {
		printf("<");
	}
	else {
		printf("=");
	}
	return 0;
}