#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    char s[101];
    scanf("%s", s);
    int len = strlen(s), cnt = 0;
    for (int i = 1; i < len; i++) {
        if (s[i-1] == s[i]) {
            cnt++;
            if (cnt == 6) {
                printf("YES");
                return 0;
            }
        }
        else {
            cnt = 0;
        }
    }
    printf("NO");
    return 0;
}