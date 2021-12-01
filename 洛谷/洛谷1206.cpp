#include <bits/stdc++.h>
using namespace std;
string trans_form(int n, int b) {
    string res;
    char c;
    while (n) {
        c = n % b;
        c >= 10 ? c += 55 : c += '0';
        res.push_back(c);
        n /= b;
    }
    return res;
}
bool is_palindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        else {i++; j--;}
    }
    return true;
}
int main(int argc, char** argv) {
    int b;
    string s, t;
    scanf("%d", &b);
    for (int i = 1; i <= 300; i++) {
        s = trans_form(i * i, b);
        if (is_palindrome(s)) {
            t = trans_form(i, b);
            reverse(t.begin(), t.end());
            cout << t << ' ' << s << endl;
        }
    }
    return 0;
}