#include <iostream>
#include <climits>
using namespace std;
int CntW[100], CntB[100], CntR[100];
int main() {
	ios::sync_with_stdio(false);
	int n, m, w = 0, b = 0, r = 0;
	cin >> n >> m;
	char col[100];
	for (int i = 0; i < n; i++) {
		cin >> col;
		for (int j = 0; j < m; j++) {
			if (col[j] != 'W') {
				w++;
			}
			if (col[j] != 'B') {
				b++;
			}
			if (col[j] != 'R') {
				r++;
			}
		}
		CntW[i] += w;
		CntB[i] += b;
		CntR[i] += r;
	}
	if (n < 3 || m <= 0) {
		cout << '0';
	}
	else {
		int min = INT_MAX;
		for (int i = 0; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				int sum = CntW[i] + (CntB[j] - CntB[i]) + (CntR[n - 1] - CntR[j]);
				if (sum < min) {
					min = sum;
				}
			}
		}
		cout << min;
	}
	return 0;
}