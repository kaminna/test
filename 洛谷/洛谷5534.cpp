#include  <bits/stdc++.h>
using namespace std;
long long f(long long x, long long y,long long z) {
	y -= x;
	return x + (z - 1) * y;
}
int main(int argc, char** argv) {
	long long a, b, c, sum;
	scanf("%ld%ld%ld", &a, &b, &c);
	sum = (a + f(a, b, c))*c / 2;
	printf("%ld\n", sum);
	return 0;
}