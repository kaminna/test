#include <bits/stdc++.h>
using namespace std;
int nums[100000];
int main() {
	ios::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 0 ; i < n; i++) {
		cin >> nums[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (nums[j] > nums[j + 1]) {
				swap(nums[j], nums[j + 1]);
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}

