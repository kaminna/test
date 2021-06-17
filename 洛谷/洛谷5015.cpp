#include <cstdio>
#include <cstring>
int main() {
    char s[1000000];
    gets(s);
    int cnt = 0, len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] != ' ') {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
