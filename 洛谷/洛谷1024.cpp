#include <bits/stdc++.h>
using namespace std;
double a, b, c, d;
double lowerbound(double start, double end) {
    double left = start, right = end, mid, f1, f2;
    while (right - left > 0.001) {
        mid = left + (right - left) / 2;
        f1 = a * left*left*left + b * left*left + c * left + d;
        f2 = a * mid*mid*mid + b * mid*mid + c * mid + d;
        if (f1 * f2 < 0) right = mid;
        else left = mid;
    }
    return mid;
}
int main(int argc, char** argv) {
    double delta, x1, x2;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    delta = (2 * b) * (2 * b) - 4 * (3 * a) * c;
    delta = sqrt(delta);
    x1 = (-2*b - delta) / 6*a;
    x2 = (-2*b + delta) / 6*a;
    if (x1 > x2) swap(x1, x2);
    printf("%.2lf ", lowerbound(-100.0, x1));
    printf("%.2lf ", lowerbound(x1, x2));
    printf("%.2lf", lowerbound(x2, 100.0));
    return 0;
}