int sumOfUnique(int* nums, int numsSize) {
    int cnt[111], ans = 0;
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < numsSize; i++) {
        cnt[nums[i]]++;
    }
    for (int i = 0; i < 111; i++) {
        if (cnt[i] == 1) ans += i;
    }
    return ans;
}