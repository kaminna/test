#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int nums;
    string s;
}info;
bool cmp(info a, info b) {
    if (a.s.size() == b.s.size()) {
        if (a.s == b.s) return a.nums < b.nums;
        return a.s > b.s;
    }
    return a.s.size() > b.s.size();
}
int main(int argc, char** argv) {
    int n;
    info nums[100];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        cin >> nums[i].s;
        nums[i].nums = i;
    }
    sort(nums+1, nums+n+1, cmp);
    cout << nums[1].nums << endl << nums[1].s << endl;
    return 0;
}