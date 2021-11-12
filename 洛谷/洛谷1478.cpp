#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int x;
    int y;
}apple;
bool cmp(apple a, apple b) {
    return a.y < b.y;
}
int main(int argc, char** argv) {
    int n, s, a, b, ans = 0;
    scanf("%d%d%d%d", &n, &s, &a, &b);
    apple nums[5001];
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &nums[i].x, &nums[i].y);
    }
    sort(nums, nums+n, cmp);
    for (int i = 0; i < n; i++) {
        if (nums[i].x <= a + b) {
            s -= nums[i].y;
            if (s < 0) break;
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}