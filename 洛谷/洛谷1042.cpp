#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
int cnt, score;
void f(char* s, int len, int n) {
	for (int i = 0; i < len; i++) {
		if (s[i] == 'W' || s[i] == 'L') {
			cnt++;
		}
		if (s[i] == 'W') {
			score++;
		}
		if (score >= n || (cnt - score) >= n) {
			if (abs(cnt - 2 * score) < 2) {
				continue;
			}
			else {
				printf("%d:%d\n", score, cnt - score);
				cnt = 0;
				score = 0;
			}
		}
	}
	printf("%d:%d\n", score, cnt - score);
	cnt = 0;
	score = 0;
}
int main(int argc, char** argv) {
	char str[100000];
	cin.getline(str, 100000, 'E');
	int len = strlen(str);
	f(str, len, 11);
	printf("\n");
	f(str, len, 21);
	return 0;
}