#include <bits/stdc++.h>
using namespace std;
int nums[1000];
int main(int argc, char** argv) {
    int n, ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        ans = 0;
        scanf("%d", &nums[i]);
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) ans++;
        }
        printf("%d ", ans);
    }
    return 0;
}