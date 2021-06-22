#include <bits/stdc++.h>
using namespace std;
int nums[11];
int main() {
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < K; i++) {
		int t;
		cin >> t;
		nums[t]++;
	}
	while (1) {
		int temp = N, flag = 0;
		while (temp != -1) {
			if (nums[temp%10] == 0) {
				flag = 1;
			}
			else {
				flag = 0;
				break;
			}
			temp /= 10;
			if (temp == 0) {
				temp = -1;
			}
		}
		if (flag) {
			printf("%d\n", N);
			return 0;
		}
		N++;
	}
	return 0;
}
