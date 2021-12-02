#include <bits/stdc++.h>
using namespace std;
int x, y, tmp;
void exgcd(int a, int b) {
    if(!b) {
        x = 1;
        y = 0;
        return;
    }
    exgcd(b, a % b);
    tmp = x;
    x = y;
    y = tmp - a / b * y;
    return;
}
int main(int argc, char** argv) {
    int a, b;
    scanf("%d%d", &a, &b);
    exgcd(a, b);
    printf("%d", (x + b) % b);
}