#include <stdio.h>
#include <string.h>
#include <math.h>
int main(int argc, char** argv) {
	char str[100];
	scanf("%s", str);
	int len = strlen(str);
	long long sum = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			sum += (str[i] - 55) * pow(16, len - 1 - i);
		}
		else {
			sum += (str[i] - 48) * pow(16, len - 1 - i);
		}
	}
	printf("%lld", sum);
	return 0;
}