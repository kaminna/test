#include <bits/stdc++.h>
using namespace std;
string mul(string num1, string num2) {
	const int L = 1e5;
	string ans;
	int n = num1.length(), m = num2.length();
	int a[n], b[m], i, j;
	for(i = 0, j = n - 1; i < n; i++, j--) a[i] = num1[j]-'0';
	for(i = 0, j = m - 1; i < m; i++, j--) b[i] = num2[j]-'0';
	int c[n+m] = {0};
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			c[i+j] += a[i] * b[j];
		}
	}
	for(i = 0; i < n + m; i++){
		if(c[i] >= 10) {
			c[i+1] += c[i] / 10;
			c[i] %= 10;
		}
	}
	for(j = n + m - 1; j > 0; j--) {
		if(c[j]) break;
	}
	for (int i = j; i >= 0; i--) {
		ans += to_string(c[i]);
	}
    return ans;
}
int main(int argc, char** argv) {
    int n, nums[10005], sum = 0, mod, index = 0;
    string s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum += i + 2;
        if (sum > n) {
            sum -= i + 2;
            break;
        }
        nums[index++] = i + 2;
    }
    mod = n - sum;
    while (mod) {
        for (int i = index - 1; i >= 0; i--) {
            nums[i]++;
            mod--;
            if (!mod) break;
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d ", nums[i]);
    }
    s = to_string(nums[0]);
    for (int i = 1; i < index; i++) {
        s = mul(s, to_string(nums[i]));
    }
    cout << endl << s << endl;
    return 0;
}