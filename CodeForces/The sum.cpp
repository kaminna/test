#include <bits/stdc++.h>
using namespace std;
long long nums[50], sum;
int main(int argc, char** argv) {
    nums[0] = nums[1] = 1;
    int k;
    scanf("%d", &k);
    for (int i = 2; i < k; i++) {
        nums[i] = nums[i-1] + nums[i-2];
    }
    for (int i = 0; i < k; i++) sum += nums[i];
    printf("%lld", sum);
    return 0;
}