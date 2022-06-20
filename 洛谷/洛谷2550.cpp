#include <bits/stdc++.h>
using namespace std;
int nums[50], ans[10];
int main() {
    int n, val;
    scanf("%d", &n);
    for (int i = 0; i < 7; i++) {
        scanf("%d", &val);
        nums[val]++;
    }
    while (n--) {
        int tmp, cnt = 0;
        for (int i = 0; i < 7; i++) {
            scanf("%d", &tmp);
            if (nums[tmp]) cnt++;
        }
        ans[cnt]++;
    }
    for (int i = 7; i > 0; i--) {
        printf("%d ", ans[i]);
    }
    return 0;
}