#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    string s, res;
    set<char> vowels;
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');
    vowels.insert('y');
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for (int i = 0; i < s.size(); i++) {
        if (!vowels.count(s[i])) {
            res += ".";
            res += s[i];
        }
    }
    cout << res << endl;
    return 0;
}