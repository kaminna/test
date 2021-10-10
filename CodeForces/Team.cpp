#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int n, a, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a);
            if (a == 1) cnt++;
        }
        if (cnt > 1) {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}