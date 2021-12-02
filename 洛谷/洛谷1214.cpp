#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int a, d;
}node;
node arr[200000];
bool check[200000];
int nums[200000];
bool cmp(int a, int b) {
    return a > b;
}
bool comp(node a, node b) {
    if (a.d != b.d) return a.d < b.d;
    return a.a < b.a;
}
int main(int argc, char** argv) {
    int n, m, d, a, t, cnt = 0, ans = 0;
    bool flag;
    scanf("%d%d", &n, &m);
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= m; j++) {
            if (!check[i*i+j*j]) nums[++cnt] = i*i + j*j;
            check[i*i+j*j] = true;
        }
    }
    sort(nums + 1, nums + cnt + 1, cmp);
    for (int i = 1; i <= cnt - n + 1; i++) {
        for (int j = i + 1; j <= cnt - n + 2; j++) {
            t = n - 2;
            d = nums[i] - nums[j];
            a = nums[j];
            flag = true;
            if (a - (n-2) * d < 0) break;
            while (t) {
                t--;
                a -= d;
                if (a < 0) {
                    flag = false;
                    break;
                }
                if (!check[a]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                arr[++ans].a = a;
                arr[ans].d = d;
            }
        }
    }
    if (!ans) {
        printf("NONE\n");
        return 0;
    }
    sort(arr + 1, arr + ans + 1, comp);
    for (int i = 1; i <= ans; i++) {
        printf("%d %d\n", arr[i].a, arr[i].d);
    }
    return 0;
}