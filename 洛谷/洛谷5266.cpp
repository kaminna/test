#include <bits/stdc++.h>
using namespace std;
map<string, int> m;
int main(int argc, char** argv) {
    int n, op, score;
    string name;
    cin >> n;
    while (n--) {
        cin >> op;
        if (op == 1) {
            cin >> name >> score;
            m[name] = score;
            cout << "OK" << endl;
        }
        else if (op == 2) {
            cin >> name;
            if (m.count(name)) {
                cout << m[name] << endl;
            }
            else cout << "Not found" << endl;
        }
        else if (op == 3) {
            cin >> name;
            if (m.count(name)) {
                m.erase(name);
                cout << "Deleted successfully" << endl;
            }
            else cout << "Not found" << endl;
        }
        else if (op == 4) {
            cout << m.size() << endl;
        }
    }
    return 0;
}