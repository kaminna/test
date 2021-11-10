#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int n, a, b;
    char s[10000], c;
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        if (s[0] >= 'a' && s[0] <= 'c') {
            c = s[0];
            scanf("%d%d", &a, &b);
        }
        else {
            sscanf(s, "%d", &a);
            scanf("%d", &b);
        }
        if (c == 'a') sprintf(s, "%d+%d=%d", a, b, a+b);
        else if (c == 'b') sprintf(s, "%d-%d=%d", a, b, a-b);
        else if (c == 'c') sprintf(s, "%d*%d=%d", a, b, a*b);
        printf("%s\n%d\n", s, (int)strlen(s));
    }
    return 0;
}