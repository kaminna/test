#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int m, v;
    double c;
}info;
bool cmp(info a, info b) {
    if (a.c == b.c) return a.m < b.m;
    return a.c > b.c;
}
int main(int argc, char** argv) {
    int n, t;
    double ans = 0;
    info nums[1000];
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &nums[i].m, &nums[i].v);
        nums[i].c = 1.0 * nums[i].v / nums[i].m;
    }
    sort(nums, nums + n, cmp);
    for (int i = 0; i < n; i++) {
        if (t > nums[i].m) {
            ans += nums[i].v;
            t -= nums[i].m;
        }
        else {
            ans += (1.0 * t / nums[i].m) * nums[i].v;
            break;
        }
    }
    printf("%.2lf", ans);
    return 0;
}