#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int nums;
    int chinese;
    int math;
    int english;
    int sum;
}info;
bool cmp(info a, info b) {
    if (a.sum == b.sum) {
        if (a.chinese == b.chinese) return a.nums < b.nums;
        return a.chinese > b.chinese;
    }
    return a.sum > b.sum;
}
int main(int argc, char** argv) {
    int n;
    info s[500];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &s[i].chinese, &s[i].math, &s[i].english);
        s[i].nums = i + 1;
        s[i].sum = s[i].chinese + s[i].math + s[i].english;
    }
    sort(s, s+n, cmp);
    for (int i = 0; i < 5; i++) {
        printf("%d %d\n", s[i].nums, s[i].sum);
    }
    return 0;
}