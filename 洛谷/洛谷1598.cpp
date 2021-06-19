#include <cstdio>
#include <cstring>
int nums[26];
int main(void) {
	char s[500];
	for (int i = 0; i < 4; i++) {
		gets(s);
		int len = strlen(s);
		for (int i = 0; i < len; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				nums[s[i] - 'A']++;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	for (int i = max - 1; i >= 0; i--) {
		for (int j = 0; j < 26; j++) {
			if (nums[j] > i) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	} 
	for (int i = 0; i < 26; i++) {
		printf("%c", i + 'A');
		if (i != 25) {
			printf(" ");
		}
	}
	return 0;
}