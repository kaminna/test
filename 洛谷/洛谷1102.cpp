#include <bits/stdc++.h>
using namespace std;
long long nums[200005];
map<long long, long long> m;
int main(int argc, char** argv) {
    int n;
    long long c, ans = 0;
    scanf("%d%lld", &n, &c);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &nums[i]);
        m[nums[i]]++;
        nums[i] -= c;
    }
    for (int i = 0; i < n; i++) ans += m[nums[i]];
    printf("%lld", ans);
    return 0;
}