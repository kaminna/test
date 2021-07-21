#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char s[50];
	scanf("%s", s);
	int len = strlen(s);
	if ((s[len - 2] == 'e' && s[len - 1] == 'r') || (s[len - 2] == 'l' && s[len - 1] == 'y')) {
		s[len - 2] = '\0';
	}
	if (s[len - 3] == 'i' && s[len - 2] == 'n' && s[len - 1] == 'g') {
		s[len - 3] = '\0';
	}
	printf("%s", s);
	return 0;
}