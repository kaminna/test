#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
	char n[50];
	scanf("%s", n);
	int i, flag, len = strlen(n);
	if (len == 1 && n[0] == '0') {
		printf("0");
		return 0;
	}
	if (len == 2 && n[1] == '0') {
		printf("-0");
		return 0;
	}
	for (flag = len - 1; flag >= 0; flag--) {
		if (n[flag] != '0') {
			break;
		}
	}
	if (n[0] == '-') {
		printf("-");
		for (i = flag;i > 0; i--) {
			printf("%c", n[i]);
		}
	}
	else {
		for (i = flag; i >= 0; i--) {
			printf("%c", n[i]);
		}
	}
	return 0;
}

