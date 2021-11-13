#include <bits/stdc++.h>
using namespace std;
//贪心
int nums[500];
bool flag;
int main(int argc, char** argv) {
    char c;
    int k, len, minpos, t = 1;
    while (scanf("%c", &c) == 1) {
        if (c >= '0' && c <= '9') nums[++nums[0]] = c - '0';
        else break;
    }
    scanf("%d", &k);
    len = nums[0] - k;
    while (len--) {
        minpos = t;
        //找区间最小
        for (int i = t; i <= k + t; ++i) {
            if (nums[minpos] > nums[i]) {
                minpos = i;
            }
        }
        //判零？
        if (nums[minpos]) flag = true;
        if (flag) printf("%d", nums[minpos]);
        //下一个
        k -= minpos - t;
        t = minpos + 1;
    }
    if (!flag) printf("0");
    return 0;
}