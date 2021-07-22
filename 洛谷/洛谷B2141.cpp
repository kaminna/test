#include <cstdio>
int f(int n) {
	int max = n % 10;
	while (n) {
		n /= 10;
		if (n % 10 > max) {
			max = n % 10;
		}
	}
	return max;
}
long long Change(int n, int Base) {	//把Base进制n转换为十进制
	long long res = n%10, pow = Base;
	while (n) {
		n /= 10;
		res += (n % 10) * pow;
		pow *= Base;
	}
	return res;
}
int main(int argc, char** argv) {
	int p, q, r, min = 0;
	scanf("%d%d%d", &p, &q, &r);
	min = f(p) > f(q) ? f(p) : f(q);
	min = min > f(r) ? min : f(r);
	min++;
	for (int i = min; i <= 16; i++) {
		if (Change(p, i) * Change(q, i) == Change(r, i)) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}