#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    vector<int> a;
    int n, sum = 0;
    while (scanf("%d", &n) == 1) {
        a.push_back(n);
    }
    for (int i = 0; i < a.back(); i++) {
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}