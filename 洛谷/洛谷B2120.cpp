#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv) {
	char s[300000];
	cin.getline(s, 300000);
	int len = strlen(s), cnt = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') {
			if (cnt) {
				printf("%d,", cnt);
			}
			cnt = 0;
		}
		else {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}