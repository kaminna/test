#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int pos = s.find("cjb");
    while (pos != -1) {
        s.insert(pos + 3, 1, ',');
        pos = s.find("cjb", pos+1);
    }
    cout << s << endl;
    return 0;
}