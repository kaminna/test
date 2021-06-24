#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char str[1000];
	scanf("%s", &str);
	int len = strlen(str);
	int flag = 1;
	char* p = str;
	char* q = (str + len - 1);
	while (p < q) {
		if (*p != *q) {
			flag = 0;
			break;
		}
		p++;
		q--;
	}
	if (flag) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}

