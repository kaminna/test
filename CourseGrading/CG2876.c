#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
	char s[10000], t[10000];
	char *p = s;
	scanf("%s%s", s, t);
	if (strstr(s, t)) {
		printf("%d", strstr(s, t) - p);
	}
	else {
		printf("-1");
	}
	return 0;
}