#include <bits/stdc++.h>
using namespace std;
int nums[100];
int main(int argc, char** argv) {
    int n, k, ans = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] && i <= k) ans++;
    }
    if (nums[k]) {
        for (int i = k+1; i <= n; i++) {
            if (nums[i] == nums[k]) ans++;
            else break;
        }
    }
    printf("%d", ans);
    return 0;
}