#include <bits/stdc++.h>
using namespace std;
int nums[5000000];
int main(int argc, char** argv) {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    nth_element(nums, nums+k, nums+n);
    printf("%d", nums[k]);
    return 0;
}