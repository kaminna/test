#include <bits/stdc++.h>
using namespace std;
int main() {
	int N, L;
	while (cin >> N >> L) {
		string s[111];
		for (int i = 0; i < N; i++) {
			cin >> s[i];
		}
		sort(s, s + N);
		for (int i =0 ; i < N; i++) {
			cout << s[i];
		}
		printf("\n");
	}
	return 0;
}
