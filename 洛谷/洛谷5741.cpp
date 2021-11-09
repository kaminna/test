#include <bits/stdc++.h>
using namespace std;
typedef struct {
    string name;
    int chinese;
    int math;
    int english;
    int sum;
}info;
bool cmp(info a, info b) {
    return a.name < b.name;
}
int main(int argc, char** argv) {
    int n;
    info s[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].chinese >> s[i].math >> s[i].english;
        s[i].sum = s[i].chinese + s[i].math + s[i].english;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (abs(s[i].chinese - s[j].chinese) <= 5 && abs(s[i].math - s[j].math) <= 5 && abs(s[i].english - s[j].english) <= 5 && abs(s[i].sum - s[j].sum) <= 10) {
                cout << s[i].name << ' ' << s[j].name << endl;
            }
        }
    }
    return 0;
}