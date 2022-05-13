#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x, price;
    long long cnt = 0;
    scanf("%d%d%d", &n, &m, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &price);
        if (price >= x) cnt++;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &price);
        if (price <= x) cnt++;
    }
    printf("%lld", cnt);
    return 0;
}