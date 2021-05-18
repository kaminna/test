#include <stdio.h>
#include <string.h>
#include <math.h>
int main(int argc, char** argv) {
	int n, m;
	char str[100];
	scanf("%d", &n);
	scanf("%s", str);
	scanf("%d", &m);
	int len = strlen(str);
	long long sum = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			sum += (str[i] - 55) * pow(n, len - 1 - i);
		}
		else {
			sum += (str[i] - 48) * pow(n, len - 1 - i);
		}
	}
	char s[33];
	int index = 0;
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