#include <bits/stdc++.h>
using namespace std;
char s[10];
int main(int argc, char** argv) {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        getchar();
        for (int j = 0; j < 6; j++) {
            scanf("%c", &s[j]);
            if (s[j] == '-') ans++;
        }
    }
    printf("%d", ans);
    return 0;
}