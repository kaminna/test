#include <cstdio>
using namespace std;
const int maxn = 3e6 + 5;
long long inv[maxn];
int main(int argc, char** argv) {
    inv[0] = 0;
    inv[1] = 1;
    int n, p;
    scanf("%d%d", &n, &p);
    printf("1\n");
    for (int i = 2; i <= n; i++) {
        inv[i] = (long long)p - (p / i) * inv[p % i] % p;
        printf("%lld\n", inv[i]);
    }
    return 0;
}