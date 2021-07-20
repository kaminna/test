#include <cstdio>
#include <cstring>
int cnt[26];
int main(int argc, char** argv) {
	char str[1200];
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		cnt[str[i] - 'a']++;
	}
	for (int i = 0; i < len; i++) {
		if (cnt[str[i] - 'a'] == 1) {
			printf("%c", str[i]);
			return 0;
		}
	}
	printf("no");
	return 0;
}