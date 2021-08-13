#include <iostream>
#include <cstdio>
using namespace std;
int a[2000], b[2000], c[2000];
void pplus(int *a, int *c) {
	int r = 0;
	for (int i = 1; i <= 1000; i++) {
		c[i] += a[i] + r;
		r = c[i] / 10;
		c[i] %= 10;
	}
}
void cheng(int *a, int c) {
	int r = 0;
	for (int i = 1; i <= 1000; i++) {
		a[i] = a[i] * c + r;
		r = a[i] / 10;
		a[i] %= 10;
	}
}
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	a[1] = 1;
	for (int i = 1; i <= n; i++) {
		cheng(a, i);
		pplus(a, c);
	}
	bool flag = 0;
	for (int i = 1000; i >= 1; i--) {
		if (c[i] != 0) flag = 1;
		if (flag) printf("%d", c[i]);
	}
	return 0;
}