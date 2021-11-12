#include <bits/stdc++.h>
using namespace std;
int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int main(int argc, char** argv) {
    double a, b, c, n1, n2, n3, mul, cnt = 0;
    scanf("%lf%lf%lf", &a, &b, &c);
    do {
        n1 = nums[0]*100+nums[1]*10+nums[2];
        n2 = nums[3]*100+nums[4]*10+nums[5];
        n3 = nums[6]*100+nums[7]*10+nums[8];
        if (n1/a == n2/b && n2/b == n3/c) {
            printf("%.0lf %.0lf %.0lf\n", n1, n2, n3);
            cnt++;
        }
    } while (next_permutation(nums, nums+9));
    if (!cnt) printf("No!!!\n");
    return 0;
}