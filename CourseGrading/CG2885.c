#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
	char str1[101], str2[101];
	scanf("%s", str1);
	int len = strlen(str1);
	for (int i = len - 1; i >= 0; i--) {
		str2[len - 1 - i] = str1[i];
	}
	int i = 0, flag = 1;
	while (i < len) {
		if (str1[i] != str2[i]) {
			flag = 0;
			break;
		}
		i++;
	}
	if (flag) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}