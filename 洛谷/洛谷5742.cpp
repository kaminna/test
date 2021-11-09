#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int nums;
    int score1;
    int score2;
    int sum() {
        return score1 + score2;
    }
    double real;
}info;

int main(int argc, char** argv) {
    int n;
    info s;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d%d", &s.nums, &s.score1, &s.score2);
        s.real = 0.7 * s.score1 + 0.3 * s.score2;
        if (s.sum() > 140 && s.real >= 80) printf("Excellent\n");
        else printf("Not excellent\n");
    }
    return 0;
}