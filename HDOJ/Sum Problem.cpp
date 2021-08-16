#include <cstdio>
long long SUM(long long n) {
	return (1 + n)*n / 2;
}
int main(int argc, char** argv) {
	long long n;
	while (scanf("%lld", &n) == 1) {
		printf("%lld\n\n", SUM(n));
	}
	return 0;
}