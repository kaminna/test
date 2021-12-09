#include <bits/stdc++.h>
using namespace std;
int nums[1000001];
int main(int argc, char** argv) {
    int m, n, s, left, right, mid, dif1, dif2, dif3;
    long long ans = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums[i]);
    }
    sort(nums, nums + m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s);
        left = 0; right = m;
        while (left < right) {
            mid = left + (right - left) / 2;
            if (nums[mid] > s) {
                if (mid > 0 && nums[mid - 1] < s) {
                    mid--;
                    break;
                }
                right = mid - 1;
            }
            else if (nums[mid] < s) {
                if (mid + 1 < m && nums[mid + 1] > s) break;
                left = mid + 1;
            }
            else break;
        }
        dif1 = abs(nums[mid] - s);
        if (mid + 1 < m) dif2 = abs(nums[mid + 1] - s);
        else dif2 = INT_MAX;
        if (mid > 0) dif3 = abs(nums[mid - 1] - s);
        else dif3 = INT_MAX;
        dif1 = min(dif1, dif3);
        ans += min(dif1, dif2);
    }
    printf("%lld", ans);
    return 0;
}