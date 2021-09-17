#include <cstdio>
int main(int argc, char** argv) {
    int n, nums;
    long long sum = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &nums);
        sum += nums;
    }
    printf("%lld", sum);
    return 0;
}