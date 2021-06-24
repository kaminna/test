#include <bits/stdc++.h>
using namespace std;
char* MyStrcpy(char* a, const char* b) {
	while (*a++=*b++);
}
int main() {
	ios::sync_with_stdio(false);
	char a[10000], b[10000];
	cin.getline(a, '/0');
	MyStrcpy(b, a);
	cout << b;
	return 0;
}

