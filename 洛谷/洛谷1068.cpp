#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int k;
    int s;
}score;
score nums[5001];
bool cmp(score a, score b) {
    if (a.s > b.s) {
        return true;
    }
    else if (a.s == b.s) {
        return a.k < b.k;
    }
    return false;
}
int main(int argc, char** argv) {
    int n,m,i;
    scanf("%d%d", &n,&m);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &nums[i].k, &nums[i].s);
    }
    sort(nums, nums+n, cmp);
    m*=1.5;
    for (i = m-1; i-1 < n; i++) {
        if (nums[i].s > nums[i+1].s) {
            printf("%d %d\n", nums[i].s, i+1);
            break;
        }
    }
    for (int j = 0; j <= i; j++) {
        printf("%d %d\n", nums[j].k, nums[j].s);
    }
    return 0;
}