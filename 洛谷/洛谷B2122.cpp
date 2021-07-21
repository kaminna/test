#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	string s;
	while (cin >> s)
	{
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}