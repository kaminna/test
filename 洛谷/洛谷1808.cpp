#include <string>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	map<string, int> cnt;
	string s;
	int n, count = 0;
	cin >> n;
	while (n--) {
		cin >> s;
		sort(s.begin(), s.end());
		cnt[s] = 1;
	}
	int len = cnt.size();
	printf("%d", len);
	return 0;
}