#include <cstring>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string s, a, b;
	getline(cin, s);
	cin >> a >> b;
	for (int i = 0; i < (int)s.length(); i++) {
		if (s.find(a) != s.npos) {
			s.replace(s.find(a), a.length(), b);
		}
	}
	cout << s;
	return 0;
}