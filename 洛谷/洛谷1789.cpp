#include <bits/stdc++.h>
using namespace std;
int n, tmpx, tmpy;
bool nums[111][111];
int f[13][2] = {{-2, 0}, {-1, -1}, {-1, 0}, {-1, 1}, {0, -2}, {0, -1}, {0, 0}, {0, 1}, {0, 2}, {1, -1}, {1, 0}, {1, 1}, {2, 0}};
int s[25][2] = {
    {-2, -2}, {-2, -1}, {-2, 0}, {-2, 1}, {-2, 2}, 
    {-1, -2}, {-1, -1}, {-1, 0}, {-1, 1}, {-1, 2}, 
    {0, -2}, {0, -1}, {0, 0}, {0, 1}, {0, 2}, 
    {1, -2}, {1, -1}, {1, 0}, {1, 1}, {1, 2}, 
    {2, -2}, {2, -1}, {2, 0}, {2, 1}, {2, 2}
};
int main(int argc, char** argv) {
    int m, k, x, y, ans = 0;
    scanf("%d%d%d", &n, &m, &k);
    while (m--) {
        scanf("%d%d", &x, &y);
        for (int i = 0; i < 13; i++) {
            tmpx = x + f[i][0];
            tmpy = y + f[i][1];
            if (tmpx < 1 || tmpx > n || tmpy < 1 || tmpy > n) continue;
            nums[tmpx][tmpy] = true;
        }
    }
    while (k--) {
        scanf("%d%d", &x, &y);
        for (int i = 0; i < 25; i++) {
            tmpx = x + s[i][0];
            tmpy = y + s[i][1];
            if (tmpx < 1 || tmpx > n || tmpy < 1 || tmpy > n) continue;
            nums[tmpx][tmpy] = true;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (nums[i][j]) {
                ans++;
            }
        }
    }
    printf("%d", n*n-ans);
    return 0;
}