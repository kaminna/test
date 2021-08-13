#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
	char s[10000], t[10000];
	scanf("%s%s", s, t);
	if (strstr(s, t)) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}