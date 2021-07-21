#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	char s[50];
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		int len = strlen(s);
		if (s[0] >= 'a' && s[0] <= 'z') {
			printf("%c", s[0] - 32);
		}
		else {
			printf("%c", s[0]);
		}
		for (int j = 1; j < len; j++) {
			if (s[j] >= 'A' && s[j] <= 'Z') {
				printf("%c", s[j] + 32);
			}
			else {
				printf("%c", s[j]);
			}
		}
		printf("\n"); 
	}
	return 0;
}
