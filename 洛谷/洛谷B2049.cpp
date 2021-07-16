#include <cstdio>
long long max(long long a, long long b) {
	return a > b ? a : b;
}
int main(int argc, char** argv) {
	long long a, b, c;
	scanf("%lld%lld%lld", &a, &b, &c);
	printf("%lld", max(max(a, b), c));
	return 0;
}