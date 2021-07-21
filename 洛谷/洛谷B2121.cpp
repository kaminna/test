#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv) {
	char s[20000];
	cin.getline(s, 20000);
	char w1[101], w2[101];
	int len = strlen(s), cnt = 0;
	int maxlen = 0, minlen = 100;
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ' || s[i] == ',' || s[i] == '.') {
			if (cnt) {
				if (cnt > maxlen) {
					maxlen = cnt;
					for (int j = 0; j < cnt; j++) {
						w1[j] = s[i - cnt + j];
					}
					w1[cnt] = '\0';
				}
				if (cnt < minlen) {
					minlen = cnt;
					for (int j = 0; j < cnt; j++) {
						w2[j] = s[i - cnt + j];
					}
					w2[cnt] = '\0';
				}
			}
			cnt = 0;
		}
		else {
			cnt++;
		}
	}
	printf("%s\n%s", w1, w2);
	return 0;
}