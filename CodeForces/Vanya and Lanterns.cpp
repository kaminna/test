#include <bits/stdc++.h>
using namespace std;
double nums[1000];
int main(int argc, char** argv) {
    int n, l;
    scanf("%d%d", &n, &l);
    for (int i = 1; i <= n; i++) {
        scanf("%lf", &nums[i]);
    }
    sort(nums+1, nums+n+1);
    double minx = nums[1];
    for (int i = 1; i <= n; i++) {
        minx = max(minx, nums[i] - nums[i-1]);
    }
    minx = max(minx/2.0, nums[1]);
    minx = max(minx, l - nums[n]);
    printf("%.9lf", minx);
    return 0;
}