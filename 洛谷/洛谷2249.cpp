#include <bits/stdc++.h>
using namespace std;
int nums[1000001];
int main(int argc, char** argv) {
    int n, m, q, left, right, mid;
    bool flag;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    while (m--) {
        scanf("%d", &q);
        flag = true;
        left = 0; right = n - 1;
        while (left < right) {
            mid = left + (right - left) / 2;
            if (nums[mid] > q) {
                right = mid;
            }
            else if (nums[mid] < q){
                left = mid + 1;
            }
            else {
                if (mid && nums[mid - 1] == q) {
                    right = mid;
                    continue;
                }
                flag = false;
                break;
            }
        }
        if (nums[left] == q) {
            printf("%d ", left + 1);
            continue;
        }
        if (flag) printf("-1 ");
        else {
            printf("%d ", mid + 1);
        }
    }
    return 0;
}