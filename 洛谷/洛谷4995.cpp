#include <bits/stdc++.h>
using namespace std;
int h[1000];
int main(int argc, char** argv) {
    int n, i, j, cnt = 0;
    long long ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &h[i]);
    }
    sort(h, h + n + 1);
    i = 0; j = n;
    while (cnt <= n) {
        ans += (h[j] - h[i]) * (h[j] - h[i]);
        cnt++;
        if (cnt & 1) i++;
        else j--;
    }
    printf("%lld", ans);
    return 0;
}