#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int n, m, nums, maxn, minn, sum;
    double average, maver = 0;
    scanf("%d%d", &n, &m);
    while (n--) {
        sum = maxn = 0;
        minn = 100;
        for (int i = 0; i < m; i++) {
            scanf("%d", &nums);
            sum += nums;
            if (nums > maxn) maxn = nums;
            if (nums < minn) minn = nums;
        }
        average = 1.0 * (sum -  maxn - minn) / (m - 2);
        if (average > maver) maver = average;
    }
    printf("%.2lf", maver);
    return 0;
}