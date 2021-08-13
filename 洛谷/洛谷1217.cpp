#include <cstdio>
#include <cstring>
int a, b, s[10];
bool isPrime(int x) {
	for (int i = 3; i*i <= x; i++)
		if (x%i == 0) return 0;
	return 1;
}
bool Revers(int x) {
	int k, len = 0;
	memset(s, 0, sizeof(s));
	while (x != 0) {
		len++;
		s[len] = x % 10;
		x /= 10;
	}
	if (len == 1) {
		s[len] = 0;
		return 1;
	}
	for (k = 1; k <= len / 2; k++)
		if (s[k] != s[len - k + 1]) return 0;
	return 1;
}
int main(int argc, char** argv) {
	int i;
	scanf("%d%d", &a, &b);
	if (b >= 9999999) b = 9999999;
	if (a % 2 == 0) a++;
	for (i = a; i <= b; i += 2) {
		if (Revers(i) == 0) continue;
		else if (isPrime(i)) printf("%d\n", i);
	}
	return 0;
}