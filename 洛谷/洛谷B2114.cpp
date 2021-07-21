#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char s[300];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] == 'A') {
			printf("T");
		}
		else if (s[i] == 'T') {
			printf("A");
		}
		else if (s[i] == 'G') {
			printf("C");
		}
		else if (s[i] == 'C') {
			printf("G");
		}
	}
	return 0;
}