#include <bits/stdc++.h>
using namespace std;
int nums[100000];
int main() {
    int n, q, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    sort(nums, nums+n);
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &k);
        printf("%lu\n", upper_bound(nums, nums+n, k)-nums);
    }
    return 0;
}