#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    return b ? gcd(b, a%b) : a;
}
int main(int argc, char** argv) {
    long long x, y, t, ans = 0;
    scanf("%lld%lld", &x, &y);
    if (x == y) {
        printf("1");
        return 0;
    }
    for (long long i = x; i * i <= x * y; i += x) {
        t = gcd(i, x*y/i);
        if (t == x && i * (x*y/i) / t == y) {
            ans++;
        }
    }
    printf("%lld", ans *= 2);
    return 0;
}