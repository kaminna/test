#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	int n;
	char s[1000000];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		int len = strlen(s), cnt = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}