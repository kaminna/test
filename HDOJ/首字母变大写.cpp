#include <cstdio>
#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	char s[1000];
	while (cin.getline(s, 1000)) {
		int len = strlen(s);
		s[0] = toupper(s[0]);
		for (int i = 1; i < len; i++) {
			if (s[i - 1] == ' ') {
				s[i] = toupper(s[i]);
			}
		}
		cout << s << endl;
	}
	return 0;
}