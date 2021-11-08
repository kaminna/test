#include <bits/stdc++.h>
using namespace std;
int nums[500][500];
int main(int argc, char** argv) {
    int n, val, i = 0, k = 0;
    scanf("%d", &n);
    while (scanf("%d", &val) == 1 && ++i) {
        if (i & 1) {
            for (int j = 0; j < val; j++) {
                if (k > 1 && !(k % n)) printf("\n");
                ++k;
                printf("0");
            }
        }
        else {
            for (int j = 0; j < val; j++) {
                if (k > 1 && !(k % n)) printf("\n");
                ++k;
                printf("1");
            }
        }
    }
    return 0;
}