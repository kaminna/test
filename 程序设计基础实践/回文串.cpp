#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char str[1000];
	int i = 1;
	while (~scanf("%s", &str)) {
		int len = strlen(str);
		int flag = 1, k = 0, j = len - 1;
		while (k < j) {
		//	printf("%c %c\n", str[k], str[j]);
			if (str[k] != str[j]) {
				flag = 0;
				break;
			}
			k++;
			j--;
		}
		if (flag) {
			printf("case%d: yes\n", i);
		}
		else {
			printf("case%d: no\n", i);
		}
		i++;
	}
	return 0;
}

