#include <bits/stdc++.h>
using namespace std;
int nums[10];
int main() {
    int n, m;
    string s;
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; i++) {
        s = to_string(i);
        for (int j = 0; j < s.length(); j++) {
            nums[s[j]-'0']++;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}