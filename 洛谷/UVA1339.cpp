#include <cstdio>
#include <cstring>
#include <cstdlib>
int cmp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main(int argc, char** argv) {
	char s1[100], s2[100];
	int len, cnt1[26], cnt2[26];
	while (~scanf("%s%s", s1, s2)) {
		memset(cnt1, 0, sizeof(cnt1));
		memset(cnt2, 0, sizeof(cnt2));
		len = strlen(s1);
		for (int i = 0; i < len; i++) {
			cnt1[s1[i] - 'A']++;
			cnt2[s2[i] - 'A']++;
		}
		qsort(cnt1, 26, sizeof(int), cmp);
		qsort(cnt2, 26, sizeof(int), cmp);
		int flag = 1;
		for (int i = 0; i < 26; i++) {
			if (cnt1[i] != cnt2[i]) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}