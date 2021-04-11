#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	while (1) {
		char* s = malloc(sizeof(char) * 10000);
		gets(s);
		int len = strlen(s);
		if (s[len - 1] == '.') {
			free(s);
			printf("*Nod*\n");
		}
		else if (s[len - 1] == '?') {
			free(s);
			printf("Quack!\n");
		}
		else if (s[len - 1] == '!') {
			free(s);
			break;
		}
	}
	return 0;
}