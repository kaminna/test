#include <cstdio>
#include <cstring>
char rev[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char Rev(char c) {
	if (c >= 'A' && c <= 'Z') {
		return rev[c - 'A'];
	}
	else {
		return rev[c - '0' + 25];
	}
}
int main(int argc, char** argv) {
	char s[100], t[100];
	while (scanf("%s", s) == 1) {
		int len = strlen(s);
		memset(t, 0, sizeof(t));
		for (int i = 0; i < len; i++) {
			t[len - 1 - i] = s[i];
		}
		if (strcmp(s, t)) {
			for (int i = 0; i < len; i++) {
				t[i] = Rev(t[i]);
			}
			if (strcmp(s, t)) {
				printf("%s -- is not a palindrome.\n\n", s);
			}
			else {
				printf("%s -- is a mirrored string.\n\n", s);
			}
		}
		else {
			for (int i = 0; i < len; i++) {
				t[i] = Rev(t[i]);
			}
			if (strcmp(s, t)) {
				printf("%s -- is a regular palindrome.\n\n", s);
			}
			else {
				printf("%s -- is a mirrored palindrome.\n\n", s);
			}
		}
	}
	return 0;
}