#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int T, len;
	char str[100];
	scanf("%d", &T);
	while (T--) {
		int cnt = 0;
		scanf("%s", str);
		len = strlen(str);
		for (int i = 0; i < len; i++) {
			if (str[i] == 'O') {
				for (int j = i; j >= 0; j--) {
					if (str[j] == 'O') {
						cnt++;
					}
					if (str[j] == 'X') {
						break;
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}