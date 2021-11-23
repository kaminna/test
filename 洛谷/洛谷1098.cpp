#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int p1, p2, p3;
    string s, str;
    scanf("%d%d%d", &p1, &p2, &p3);
    cin >> s;
    for (int p = 0; p < s.size(); p++) {
        if ((s[p] == '-') && ((islower(s[p-1]) && islower(s[p+1])) || (isdigit(s[p-1]) && isdigit(s[p+1])))) {
            if (s[p-1] < s[p+1]) {
                s.erase(p, 1);
                if (p1 == 1) {
                    for (char c = s[p-1]+1; c < s[p]; c++) {
                        for (int k = 0; k < p2; k++) {
                            str.push_back(c);
                        }
                    }
                }
                else if (p1 == 2) {
                    for (char c = s[p-1]+1; c < s[p]; c++) {
                        for (int k = 0; k < p2; k++) {
                            str.push_back(toupper(c));
                        }
                    }
                }
                else {
                    for (char c = s[p-1]+1; c < s[p]; c++) {
                        for (int k = 0; k < p2; k++) {
                            str.push_back('*');
                        }
                    }
                }
                if (p3 == 2) reverse(str.begin(), str.end());
                s.insert(p, str);
                str.erase();
            }
            else if (s[p-1]+1 == s[p+1]) s.erase(p, 1);
        }
    }
    cout << s << endl;
    return 0;
}