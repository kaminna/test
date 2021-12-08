#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int a;
    int b;
}info;
bool cmp(info x, info y) {
    return x.b < y.b;
}
int main(int argc, char** argv) {
    int n, start, ans = 1;
    info nums[1000001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &nums[i].a, &nums[i].b);
    }
    sort(nums, nums + n, cmp);
    start = nums[0].b;
    for (int i = 1; i < n; i++) {
        if (nums[i].a >= start) {
            start = nums[i].b;
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}