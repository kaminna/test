#include <bits/stdc++.h>
using namespace std;
long long ans;
void f(int x, int y, int H, int W, int A, int B) {
	if (x == H && y == W) {
		ans++;
	}
	if (x != W && x != B)
	f(x++, y, H, W, A, B);
	if (y != H && y != A)
	f(x, y++, H, W, A, B);
}
int main() {
	int H, W, A, B;
	cin >> H >> W >> A >> B; 
	f(0, 0, H, W, A, B);
	cout << ans << endl;
	return 0;
}
