#include <bits/stdc++.h>
using namespace std;
int gra[10][10], fx, fy, ans;
int dr[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool vis[10][10];
void dfs(int curx, int cury) {
    if (curx == fx && cury == fy) {
        ans++;
        return;
    }
    else {
        for (int i = 0; i < 4; i++) {
            if (!vis[curx+dr[i][0]][cury+dr[i][1]] && !gra[curx+dr[i][0]][cury+dr[i][1]]) {
                vis[curx][cury] = true;
                dfs(curx+dr[i][0], cury+dr[i][1]);
                vis[curx][cury] = false;
            }
        }
    }
}
int main(int argc, char** argv) {
    int n, m, t, sx, sy, x, y;
    scanf("%d%d%d", &n, &m, &t);
    scanf("%d%d%d%d", &sx, &sy, &fx, &fy);
    while (t--) {
        scanf("%d%d", &x, &y);
        gra[x][y] = 1;
    }
    for (int i = 0; i <= n+1; i++) {
        gra[i][0] = 1;
        gra[i][m+1] = 1;
    }
    for (int i = 0; i <= m+1; i++) {
        gra[0][i] = 1;
        gra[n+1][i] = 1;
    }
    dfs(sx, sy);
    printf("%d", ans);
    return 0;
}