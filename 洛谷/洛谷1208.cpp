#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int p;
    int a;
}info;
bool cmp(info x, info y) {
    if (x.p == y.p) return x.a > y.a;
    return x.p < y.p;
}
int main(int argc, char** argv) {
    int n, m, t;
    long long ans = 0;
    info nums[10000];
    scanf("%d%d", &n, &m);
    t = n;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &nums[i].p, &nums[i].a);
    }
    sort(nums, nums + m, cmp);
    for (int i = 0; i < n; i++) {
        if (t > nums[i].a) {
            ans += nums[i].a * nums[i].p;
            t -= nums[i].a;
        }
        else {
            ans += nums[i].p * t;
            break;
        }
    }
    printf("%lld", ans);
    return 0;
}