#include <bits/stdc++.h>
using namespace std;
int nums[100];
int main(int argc, char** argv) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) nums[i] = i+1;
    do {
        for (int i = 0; i < n; i++) printf("%5d", nums[i]);
        printf("\n");
    } while (next_permutation(nums, nums+n));
    return 0;
}