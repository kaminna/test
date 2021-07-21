#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	int k;
	scanf("%d", &k);
	char s[1000];
	scanf("%s", s);
	int len = strlen(s), cnt = 1;
	for (int i = 0; i+1 < len; i++) {
		if (s[i] == s[i + 1]) {
			cnt++;
			if (cnt >= k) {
				printf("%c", s[i]);
				return 0;
			}
		}
		else {
			cnt = 1;
		}
	}
	printf("No");
	return 0;
}