#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    long long n, m, a, l, w;
    scanf("%lld%lld%lld", &n, &m, &a);
    l = n/a;
    w = m/a;
    if (n%a) l++;
    if (m%a) w++;
    printf("%lld", l*w);
    return 0;
}