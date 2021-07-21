#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char s[1000];
	int cnt = 1;
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i + 1 < len; i++) {
		if (s[i] != s[i + 1]) {
			printf("%d%c", cnt, s[i]);
			cnt = 1;
		}
		else {
			cnt++;
		}
	}
	printf("%d%c", cnt, s[len - 1]);
	return 0;
}