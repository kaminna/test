#include <cstdio>
#include <cstring>
int a[10000], b[10000], r;
void sum(int* a, int* b) {
	for (int i = 0; i < 10000; i++) {
		a[i] += b[i] + r;
		r = 0;
		if (a[i] >= 10) {
			r = a[i] / 10;
			a[i] %= 10;
		}
	}
}
void swap(int* a, int* b) {
	int t[10000];
	memset(t, 0, sizeof(t));
	for (int i = 0; i < 10000; i++) {
		t[i] = a[i];
		a[i] = b[i];
		b[i] = t[i];
	}
}
int main() {
	int n;
	scanf("%d", &n);
	if (n == 0) {
		printf("0");
		return 0;
	}
	a[0] = 1;
	b[0] = 2;
	if (n == 1) {
		printf("%d", a[0]);
		return 0;
	}
	else if (n == 2) {
		printf("%d", b[0]);
		return 0;
	}
	else {
		for (int i = 2; i < n; i++) {
			sum(a, b);
			swap(a, b);
		}
		int pos = 9999;
		for (int i = 9999; i >= 0; i--) {
			if (b[i]) {
				pos = i;
				break;
			}
		}
		for (int i = pos; i >= 0; i--) {
			printf("%d", b[i]);
		}
	}
	return 0;
}
