#include <bits/stdc++.h>
using namespace std;
int mp[111][111];
int main(int argc, char** argv) {
    int n, m, r, x, y, ans = 0;
    scanf("%d%d%d", &n, &m, &r);
    while (m--) {
        scanf("%d%d", &x, &y);
        int starty = y-r < 1 ? 1 : y-r;
        int startx = x-r < 1 ? 1 : x-r;
        int endy = y+r > n ? n : y+r;
        int endx = x+r > n ? n : x+r;
        for (int i = starty; i <= endy; i++) {
            for (int j = startx; j <= endx; j++) {
                long long dis = abs(j-x)*abs(j-x)+abs(i-y)*abs(i-y);
                if (dis <= r*r) {
                    mp[i][j] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (mp[i][j]) ans++;
        }
    }
    printf("%d", ans);
    return 0;
}