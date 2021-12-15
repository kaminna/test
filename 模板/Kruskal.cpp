#include <bits/stdc++.h>
using namespace std;
int n, m, nums;
int w[100000], p[100000], u[100000], v[100000], r[100000], pos[100000];
int cmp(const int i, const int j) {
    return w[i] < w[j];
}
int find(int x) {
    return p[x] == x ? x : p[x] = find(p[x]);
}
int Kruskal() {
    int ans = 0;
    for (int i = 0; i < n; ++i) p[i] = i;
    for (int i = 1; i <= m; ++i) r[i] = i;
    sort(r + 1, r + m + 1, cmp);
    for (int i = 1; i <= m; i++) {
        int e = r[i]; int x = find(u[e]); int y = find(v[e]);
        if (x != y) {
            pos[++pos[0]] = e;
            ans += w[e];
            p[x] = y;
        }
    }
    return ans;
}
int main(int argc, char** argv) {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d%d%d", &nums, &u[i], &v[i], &w[i]);
    }
    printf("%d\n", Kruskal());
    sort(pos + 1, pos + pos[0] + 1);
    for (int i = 1; i <= pos[0]; i++) {
        printf("%d ", pos[i]);
    }
	return 0;
}