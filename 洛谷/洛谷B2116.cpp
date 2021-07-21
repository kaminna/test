#include <cstdio>
#include <cstring>
char Change(char &c) {
	if (c >= 'a' && c <= 'z') {
		return c -= 32;
	}
	return c += 32;
}
int main(int argc, char** argv) {
	char s[100];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if ((s[i] >= 'A' && s[i] <= 'W') || (s[i] >= 'a' && s[i] <= 'w')) {
			s[i] += 3;
			Change(s[i]);
		}
		else {
			s[i] -= 23;
			Change(s[i]);
		}
	}
	for (int i = len-1; i >= 0; i--) {
		printf("%c", s[i]);
	}
	return 0;
}