#include <bits/stdc++.h>
using namespace std;
void Swap(int* n, int* m) {
	int t = *n;
	*n = *m;
	*m = t;
}
int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	Swap(&n, &m);
	cout << n << ' ' << m;
	return 0;
}

