#include <cstdio>
int main(int argc, char** argv) {
	int flag = 1;
	long long a, c, p, q, r, x;
	scanf("%lld%lld%lld%lld%lld%lld", &a, &c, &p, &q, &r, &x);
	while (x > 0) {
		if (a < c) {
			x -= p;
			if (x < 0) break;
			a++;
		}
		else if (flag && a == c) {
			x -= q;
			flag = 0;
			if (x < 0) break;
		}
		else {
			x -= r;
			if (x < 0) break;
			a++;
		}
	}
	printf("%lld", a);
	return 0;
}