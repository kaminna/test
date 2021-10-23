#include <bits/stdc++.h>
using namespace std;
int n, ans;
void dfs(int vi, int area) {
    if (vi == 4) {
        if (area == n) {
            ans++;
        }
    }
    else {
        for (int i = 0; i*i <= n; i++) {
            dfs(vi+1, area + i*i);
        }
    }
}
int main(int argc, char** argv) {
    scanf("%d", &n);
    dfs(0, 0);
    printf("%d", ans);
    return 0;
}