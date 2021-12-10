#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int cnt;
    int index;
}info;
info nums[100001];
bool cmp(info a, info b) {
    return a.cnt < b.cnt;
}
int main(int argc, char** argv) {
    int n, q, s, left, right, mid;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &nums[i].cnt);
        nums[i].index = i;
    }
    sort(nums + 1, nums + n + 1, cmp);
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &s);
        left = 1; right = n;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid].cnt > s) {
                right = mid - 1;
            }
            else if (nums[mid].cnt < s) {
                left = mid + 1;
            }
            else break;
        }
        if (nums[mid].cnt == s) {
            printf("%d\n", nums[mid].index);
        }
        else printf("0\n");
    }
    return 0;
}