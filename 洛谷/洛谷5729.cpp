#include <bits/stdc++.h>
using namespace std;
bool cube[25][25][25];
int cnt;
int main(int argc, char** argv) {
    int w, x, h, q;
    int x1, x2, y1, y2, z1, z2;
    scanf("%d%d%d%d", &w, &x, &h, &q);
    for (int i = 0; i < q; ++i) {
        scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
        for (int j = x1; j <= x2; j++) {
            for (int k = y1; k <= y2; k++) {
                for (int l = z1; l <= z2; l++) {
                    cube[j][k][l] = true;
                }
            }
        }
    }
    for (int j = 1; j <= w; j++) {
        for (int k = 1; k <= x; k++) {
            for (int l = 1; l <= h; l++) {
                if (!cube[j][k][l]) cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}