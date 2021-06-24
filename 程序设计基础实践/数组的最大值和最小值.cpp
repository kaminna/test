#include <bits/stdc++.h>
using namespace std;
int Find(int* nums, int n, int &max, int &min) {
	max = nums[0];
	min = nums[0];
	for (int i = 0; i < n; i++) {
		if (nums[i] > max) {
			max = nums[i];
		}
		if (nums[i] < min) {
			min = nums[i]; 
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	int n, max, min, nums[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	Find(nums, n, max, min);
	cout << max << ' ' << min;
	return 0;
}

