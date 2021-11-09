#include <bits/stdc++.h>
using namespace std;
int ans[1000007];
bool is_Prime(long long x) {
	if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    if (!(x & 1)) return false;
    if (!((x%6==1)||(x%6==5))) return false;    
	for (long long i = 5; (i-1)*(i-1) <= x; i+=2) {
		if (!(x%i)) return false;
	}
	return true;
}
int main(int argc, char** argv) {
    int n, m, l, r;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        if (is_Prime(i)) ans[i] = ans[i-1] + 1;
        else ans[i] = ans[i-1];
    }
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &l, &r);
        if (l < 1 || r > m) {
            printf("Crossing the line\n");
            continue;
        }
        printf("%d\n", ans[r] - ans[l-1]);
    }
    return 0;
}