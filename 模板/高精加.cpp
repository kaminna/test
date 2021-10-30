#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char a[1000], b[1000], sum[1000];
	memset(sum, '0', sizeof(sum));
	scanf("%s%s", a, b);
	int len1 = strlen(a), len2 = strlen(b), i = 0;
	len1--;
	len2--;
	while (len1 != -1 && len2 != -1) {
		if (sum[i] > '9') {
			sum[i] -= 10;
			sum[i + 1]++;
		}
		sum[i] += a[len1] + b[len2] - 2 * '0';
		if (sum[i] > '9') {
			sum[i] -= 10;
			sum[i + 1]++;
		}
		len1--;
		len2--;
		i++;
	}
	while (len1 != -1) {
		if (sum[i] > '9') {
			sum[i] -= 10;
			sum[i + 1]++;
		}
		sum[i] += a[len1] - '0';
		if (sum[i] > '9') {
			sum[i] -= 10;
			sum[i + 1]++;
		}
		len1--;
		i++;
	}
	while (len2 != -1) {
		if (sum[i] > '9') {
			sum[i] -= 10;
			sum[i + 1]++;
		}
		sum[i] += b[len2] - '0';
		if (sum[i] > '9') {
			sum[i] -= 10;
			sum[i + 1]++;
		}
		len2--;
		i++;
	}
	if (sum[i] == '0') {
		i--;
	}
	while (i != -1) {
		printf("%c", sum[i]);
		i--;
	}
	return 0;
}