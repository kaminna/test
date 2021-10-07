#include <bits/stdc++.h>
using namespace std;
long long dp[100001][2], nums[100001];
int main(int argc, char** argv) {
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        nums[a]++;
    }
    for (int i = 1; i < 100001; i++) {
        dp[i][0] = dp[i-1][1] + nums[i]*i;
        dp[i][1] = max(dp[i-1][0], dp[i-1][1]);
    }
    cout << max(dp[100000][0], dp[100000][1]);
    return 0;
}