#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    string key, s;
    cin >> key >> s;
    for (int i = 0; i < key.length(); ++i) {
        if (islower(key[i])) key[i] = toupper(key[i]);
        key[i] %= 'A';
    }
    for (int i = 0, j = 0; i < s.length(); i++, j++) {
        if (j == key.length()) j = 0;
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= key[j];
            if (s[i] < 'a') s[i] += 26;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] -= key[j];
            if (s[i] < 'A') s[i] += 26;
        }
    }
    cout << s << endl;
    return 0;
}