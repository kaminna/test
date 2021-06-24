#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* nums = (int*)malloc(sizeof(int) * n);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	printf("%.2lf", sum / n);
	free(nums);
	return 0;
}

