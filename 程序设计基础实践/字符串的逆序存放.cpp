#include <bits/stdc++.h>
using namespace std;
void MakeReverse(char* str, int len) {
	int i = 0, j = len - 1;
	while (i < j) {
		int t = str[i];
		str[i] = str[j];
		str[j] = t;
		i++;
		j--;
	}
}
int main() {
	ios::sync_with_stdio(false);
	char str[10000];
	cin.getline(str, '/0');
	int len = strlen(str);
	MakeReverse(str, len);
	cout << str;
	return 0;
}

