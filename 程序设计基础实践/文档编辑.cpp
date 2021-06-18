#include <cstdio>
#include <cstring>
#include <cstdlib>
int main() {
	int n;
	scanf("%d", &n);
	getchar();
	char s[1000000];
	gets(s);
	int len = strlen(s);
	if (s[len - 1] == 'd' && s[len - 2] == 'n' && s[len - 3] == 'e') {
		len -= 3;
	}
	char str[1000];
	for (int i = 0; i < len; i++) {
		int j = 0, k = i, flag = 0;
		while (k < len && s[k] != ' ') {
			if (s[k] < '0' || s[k] > '9') {
				flag = 1;
			}
			str[j] = s[k];
			j++;
			k++;
		}
		str[j] = '\0';
		i = k;
		if (flag) {
			printf("%s ", str);
		}
		else {
			long long num = atoll(str) + n;
			printf("%lld ", num);
		}
	}
	return 0;
}

