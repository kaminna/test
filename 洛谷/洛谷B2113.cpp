#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char s[100];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i+1 < len; i++) {
		printf("%c", s[i] + s[i + 1]);
	}
	printf("%c", s[len - 1] + s[0]);
	return 0;
}