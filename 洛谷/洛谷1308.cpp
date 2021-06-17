#include <cstdio>
#include <cstdlib>
#include <cstring> 
#include <cctype>
void strlower(char *a) {
	for (int i = 0; a[i]; i++) {
		if (isupper(a[i])) a[i] = tolower(a[i]);
	}
}
int main() {
	char w[100], art[2000000];
	scanf("%s", &w);
	getchar();
	gets(art);
	int len1 = strlen(w), len2 = strlen(art);
	int cnt = 0, pos = 2000000;
	strlower(w);
	strlower(art);
	for (int i = 0; i < len2; i++) {
		if (art[i] == ' ') {
			continue;
		}
		if (w[0] == art[i]) {
			if (i != 0 && art[i - 1] != ' ') {
				continue;
			}
			int flag = 1, k = i + 1;
			for (int j = 1; j < len1; j++, k++) {
				if (w[j] == art[k]) {
					;
				}
				else {
					flag = 0;
					i = k;
					break;
				}
			}
			if (flag && (art[k] == ' ' || art[k] == '\0')) {
				cnt++;
				if (i < pos) {
					pos = i;
				}
			}
		}
	}
	if (cnt == 0) {
		printf("-1");
		return 0;
	}
	printf("%d %d", cnt, pos);
	return 0;
}