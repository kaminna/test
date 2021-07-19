#include <cstdio>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int n;
	double average, nums[300], sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &nums[i]);
		sum += nums[i];
	}
	sort(nums, nums + n);
	sum -= nums[0] + nums[n - 1];
	average = sum / (n - 2); 
	printf("%.2lf %.2lf", average, max(abs(average - nums[1]), abs(average - nums[n - 2])));
	return 0;
}
