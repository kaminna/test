#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	char ttr[100000], str[100000];
	while (~scanf("%s%s", ttr, str)) {
		int len1 = strlen(ttr);
		int len2 = strlen(str);
		int k = 0, flag = 0;
		for (int i = 0; i < len1; i++) {
			for (int j = k; j < len2; j++) {
				if (ttr[i] == str[j]) {
					flag++;
					k = j + 1;
					break;
				}
			}
		}
		if (flag == len1) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	return 0;
}