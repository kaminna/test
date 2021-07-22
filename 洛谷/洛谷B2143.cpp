#include <cstdio>
int main(int argc, char** argv) {
	long long sum = 0;
	int m, index = 0;
	char s[33];
	scanf("%lld%d", &sum, &m);
	while (sum) {
		if (sum % m >= 10) {
			s[index] = (sum % m) + 55;
		}
		else {
			s[index] = (sum % m) + 48;
		}
		sum /= m;
		index++;
	}
	for (int i = index - 1; i >= 0; i--) {
		printf("%c", s[i]);
	}
	return 0;
}