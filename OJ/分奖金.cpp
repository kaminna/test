#include <cstdio>
int main(int argc, char** argv) {
    double nums[100000], max = 0;
	long long n, k;
	scanf("%lld%lld", &n, &k);
	for (long long i = 0; i < n; i++) {
		scanf("%lf", &nums[i]);
		if (nums[i] > max) max = nums[i];
	}
	double left = 0, right = max;
	while (right-left >= 0.001) {
		double mid = (left + right) / 2;
        long long cnt = 0;
        for (long long i = 0; i < n; i++) {
            cnt += (long long)(nums[i] / mid);
        }
		if (cnt >= k) left = mid;
		else if (cnt < k) right = mid;
	}
	printf("%.2lf", left);
	return 0;
}