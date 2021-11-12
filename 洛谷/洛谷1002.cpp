#include <bits/stdc++.h>
using namespace std;
long long ans[50][50];
int main(int argc, char** argv) {
    int x1, x2, y1, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    ans[2][1] = 1;
    x1 += 2;
    y1 += 2;
    x2 += 2;
    y2 += 2;
    for (int i = 2; i <= x1; i++) {
        for (int j = 2; j <= y1; j++) {
            if (i == x2 && j == y2) continue;
            if ((i == x2 - 2 || i == x2 + 2) && (j == y2 - 1 || j == y2 + 1)) continue;
            if ((i == x2 - 1 || i == x2 + 1) && (j == y2 - 2 || j == y2 + 2)) continue;
            ans[i][j] = ans[i-1][j] + ans[i][j-1];
        }
    }
    printf("%lld", ans[x1][y1]);
    return 0;
}