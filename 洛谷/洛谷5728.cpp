#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int chinese;
    int math;
    int english;
    int sum;
}info;
int main(int argc, char** argv) {
    int n, ans = 0;
    info s[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &s[i].chinese, &s[i].math, &s[i].english);
        s[i].sum = s[i].chinese + s[i].math + s[i].english;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (abs(s[i].chinese - s[j].chinese) <= 5 && abs(s[i].math - s[j].math) <= 5 && abs(s[i].english - s[j].english) <= 5 && abs(s[i].sum - s[j].sum) <= 10) ans++;
        }
    }
    printf("%d", ans);
    return 0;
}