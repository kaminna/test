#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char s[100];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len-1; i++, len--) {
		if (s[i] != s[len - 1]) {
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
}