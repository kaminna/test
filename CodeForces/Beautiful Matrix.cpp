#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int nums, x, y;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &nums);
            if (nums == 1) {
                x = i;
                y = j;
            }
        }
    }
    printf("%d", abs(x-3)+abs(y-3));
    return 0;
}