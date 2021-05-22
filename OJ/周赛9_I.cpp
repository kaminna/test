#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (a < b) swap(a, b);
	return b == 0 ? a : gcd(b, a % b);
}
int x, y;
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		if (gcd(x, y) != 1) {
			printf("yes dsd yes\n");
		}
		else {
			printf("no dsd no\n");
		}
	}
	return 0;
}