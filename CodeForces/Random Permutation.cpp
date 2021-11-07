#include <bits/stdc++.h>
using namespace std;
double fac[100] = {1, 1, 2, 6, 24, 120};
double Fac(int n) {
    if (fac[n]) return fac[n];
    return fac[n] = Fac(n-1) * n;
}
int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);
    double fz, fm = 1;
    fz = Fac(n);
    fz *= fz;
    for (int i = 1; i <= n; i++) {
        fm *= n;
    }
    printf("%.12lf", fz/fm);
    return 0;
}