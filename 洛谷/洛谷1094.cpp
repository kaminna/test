#include <bits/stdc++.h>
using namespace std;
int p[50000];
int main(int argc, char** argv) {
    int w, n, ans = 0;
    scanf("%d%d", &w, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    sort(p, p + n);
    for (int i = 0, j = n - 1; i <= j; ) {
        if (p[j] == w) {
            ans++;
            j--;
        }
        if (p[i] + p[j] <= w) {
            ans++;
            i++;
            j--;
        }
        else {
            ans++;
            j--;
        }
    }
    printf("%d", ans);
    return 0;
}