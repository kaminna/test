#include <bits/stdc++.h>
using namespace std;
typedef struct  {
    int nums;
    int index;
}node;
bool cmp(node a, node b) {
    if (a.nums == b.nums) return a.index < b.index;
    return a.nums < b.nums;
}
int main(int argc, char** argv) {
    int n;
    double ans = 0;
    node info[10000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &info[i].nums);
        info[i].index = i;
    }
    sort(info + 1, info + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        printf("%d ", info[i].index);
        ans += info[i].nums * (n - i);
    }
    printf("\n%.2lf\n", ans / n);
    return 0;
}