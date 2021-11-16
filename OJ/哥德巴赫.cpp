#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
const long long maxn = 10000007 + 10;
const long long maxp = 700000;
int vis[maxn];
long long prime[maxp];
ll pri[maxn];
void sieve(long long n){
    for (int i = 2;i <= maxn; i++) {
        if (!vis[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <=prime[0] && i*prime[j] <= maxn; j++) {
            vis[i*prime[j]] = 1;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
}
 
long long gen(long long n){
    sieve(n);
    long long c = 1;
    prime[0] = 2;
    pri[2]=1;
    for (long long i = 3; i <= n; i += 2)
        if(!vis[i]) {
            prime[c++] = i;
            pri[i]=1;
        }
    return c;
}
int main(int argc, char** argv) {
    long long n;
    long long c = gen(maxn);
    int pos;
    while (scanf("%lld", &n) == 1) {
        int tmp=min(n,c);
        int pos=lower_bound(prime,prime+tmp,n)-prime;
        for (ll i=pos-1;i>=0;i--) {
            if (pri[n-prime[i]]) {
                printf("%lld=%lld+%lld\n", n, n-prime[i],prime[i]);
                break;
            }
        }
    }
    return 0;
}