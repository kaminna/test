#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int n, op, pos, len;
    cin >> n;
    string s, t;
    cin >> s;
    while (n--) {
        cin >> op;
        if (op == 1) {
            cin >> t;
            s += t;
            cout << s << endl;
        }
        else if (op == 2) {
            cin >> pos >> len;
            s = s.substr(pos, len);
            cout << s << endl;
        }
        else if (op == 3) {
            cin >> pos >> t;
            s = s.insert(pos, t);
            cout << s << endl;
        }
        else {
            cin >> t;
            if (s.find(t) != string::npos) {
                cout << s.find(t) << endl;
            }
            else cout << "-1" << endl;
        }
    }
    return 0;
}