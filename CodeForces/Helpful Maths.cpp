#include <bits/stdc++.h>
using namespace std;
int nums[5];
int main(int argc, char** argv) {
    int n, len = 0;
    bool flag = false;
    char c;
    while (1) {
        scanf("%d", &n);
        nums[n]++;
        len++;
        scanf("%c", &c);
        if (c == '\n') break;
    }
    for (int i = 1; i < 4; i++) {
        while (nums[i]) {
            if (flag) printf("+");
            printf("%d", i);
            flag = true;
            nums[i]--;
        }
    }
    return 0;
}