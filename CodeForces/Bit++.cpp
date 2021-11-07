#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int n, x = 0;
    char s[10];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        if (s[1] == '+') x++;
        else x--;
    }
    printf("%d", x);
    return 0;
}