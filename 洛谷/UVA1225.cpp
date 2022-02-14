#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int T, n, cnt[100];
    scanf("%d", &T);
    while (T--) {
        memset(cnt, 0, sizeof(cnt));
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            int j = i;
            while (j) {
                cnt[j % 10]++;
                j /= 10;
            }
        }
        for (int i = 0; i < 10; ++i) {
            printf("%d", cnt[i]);
            if (i != 9) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}