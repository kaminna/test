#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &a, &b);
        if (a == b) {
            printf("0\n");
            continue;
        }
        if (a&1) {
            if (b&1) { //奇奇
                if (a < b) {
                    if (((b-a)/2)&1) printf("2\n");//3+3+3-2 7
                    else printf("3\n");//3+3+3 9
                }
                else printf("1\n");//9 3
            }
            else { //奇偶
                if (a < b) printf("1\n");
                else {
                    printf("2\n");
                }
            }
        }
        else {
            if (b&1) { //偶奇
                if (a < b) printf("1\n");
                else printf("2\n");
            }
            else { //偶偶
                if (a < b) {
                    if (((b-a)/2)&1) printf("2\n");//10+5+5 20
                    else printf("3\n");//10+7+7-2 22
                }
                else printf("1\n");
            }
        }
    }
    return 0;
}