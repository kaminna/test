#include <cstdio>
#include <cstring>
char change(char s) {
	if (s >= 'a' && s <= 'z') {
		s -= 32;
		return s;
	}
	s += 32;
	return s;
}
int main(int argc ,char** argv) {
	char word[100];
	char article[2000000];
	scanf("%s", &word);
	getchar();
	gets(article);
	int l = strlen(word);
	int cnt = 0, index = 2000000, len = strlen(article);
	for (int i = 0; i < len; i++) {
		if (article[i] == ' ') {
			continue;
		}
		if (word[0] == article[i] || change(word[0]) == article[i]) {
			if (i!=0 && article[i-1] != ' ') {
				continue;
			}
			int flag = 1, k = i + 1;
			for (int j = 1; j < l; j++, k++) {
				if (word[j] == article[k] || change(word[i]) == article[k]) {
					;
				}
				else {
					flag = 0;
					i = k;
					break;
				}
			}
			if (flag && (article[k] == ' ' || article[k] == '\0')) {
				cnt++;
				if (i < index) {
					index = i;
				}
			}
		}
	}
	if (cnt == 0) {
		printf("-1");
		return 0;
	}
	printf("%d %d", cnt, index);
	return 0;
} 

