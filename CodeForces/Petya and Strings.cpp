#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) {
            printf("-1");
            return 0;
        }
        if (a[i] > b[i]) {
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}