#include <bits/stdc++.h>
using namespace std;
long long nums[61];
int main() {
    long long k;
    scanf("%lld", &k);
    nums[0] = 1;
    for (int i = 1; i < 61; i++) {
        nums[i] = nums[i-1] * 2;
    }
    long long pos = upper_bound(nums, nums+61, k) - nums;
    for (long long i = pos; i >= 0; i--) {
        if (!(k%nums[i-1])) {
            printf("%lld\n", i);
            break;
        }
        if (k%nums[i-1]==nums[i-1]) {
            printf("%lld\n", i-1);
            break;
        }
    }
    return 0;
}