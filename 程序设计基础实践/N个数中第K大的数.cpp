#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false);
	int n, k;
	int nums[100000];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	sort(nums, nums + n, cmp);
	cout << nums[k - 1];
	return 0;
}

