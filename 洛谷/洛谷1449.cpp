#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    stack<long long> nums;
    string s;
    long long val = 0, a = 0, b = 0, ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            val = s[i] - '0';
            a *= 10;
            a += val;
        }
        else {
            if (s[i] == '.') {
                nums.push(a);
            }
            else if (s[i] == '-') {
                a = nums.top(); nums.pop();
                b = nums.top(); nums.pop();
                nums.push(b-a);
            }
            else if (s[i] == '+') {
                a = nums.top(); nums.pop();
                b = nums.top(); nums.pop();
                nums.push(b+a);
            }
            else if (s[i] == '*') {
                a = nums.top(); nums.pop();
                b = nums.top(); nums.pop();
                nums.push(b*a);
            }
            else if (s[i] == '/') {
                a = nums.top(); nums.pop();
                b = nums.top(); nums.pop();
                nums.push(b/a);
            }
            else if (s[i] == '@') {
                ans = nums.top(); nums.pop();
                break;
            }
            a = 0;
        }
    }
    printf("%lld", ans);
    return 0;
}