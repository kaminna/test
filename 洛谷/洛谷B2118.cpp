#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	string s1, s2, temp;
	cin >> s1 >> s2;
	if (s1.find(s2) != s1.npos) {
		cout << s2 << " is substring of " << s1 << endl;
	}
	else if (s2.find(s1) != s2.npos) {
		cout << s1 << " is substring of " << s2 << endl;
	}
	else {
		cout << "No substring" << endl;
	}
	return 0;
}
