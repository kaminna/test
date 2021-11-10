#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int nums, cnt = 0;
    long long sum = 0;
    while (scanf("%d", &nums) == 1 && ++cnt) {
        sum += nums;
    }
    sum *= pow(2, cnt - 1);
    printf("%lld", sum);
    return 0;
}