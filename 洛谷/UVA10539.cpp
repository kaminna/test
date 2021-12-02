#include <bits/stdc++.h>
using namespace std;
const long long maxn = 1000010, maxp = 1000000000000;
long long nums[maxn], T;
bool vis[maxn];
void solve() {
    for (long long i = 2; i < maxn; i++) {
        if (!vis[i]) {
            for (long long j = i * i; j < maxn; j += i) {
                vis[j] = true;
            }
            for (long long p = i * i; p <= maxp; p *= i) {
                nums[++T] = p;
            }
        }
    }
    return;
}
int main(int argc, char** argv) {
    int N;
    long long low, high, left, right;
    solve();
    sort(nums + 1, nums + T + 1);
    scanf("%d", &N);
    while (N--) {
        scanf("%lld%lld", &low, &high);
        left = lower_bound(nums + 1, nums + T + 1, low) - nums;
        right = lower_bound(nums + 1, nums + T + 1, high) - nums;
        printf("%lld\n", right - left);
    }
}