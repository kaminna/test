#include <bits/stdc++.h>
using namespace std;
string fac[1010];
string mul(string num1, string num2) {
	const int L = 1e5;
	string ans;
	int n = num1.length(), m = num2.length();
	int a[n], b[m], i, j;
	for(i=0,j=n-1;i<n;i++,j--) a[i]=num1[j]-'0';
	for(i=0,j=m-1;i<m;i++,j--) b[i]=num2[j]-'0';
	int c[n+m] = {0};
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			c[i+j] += a[i]*b[j];
		}
	}
	for(i = 0; i < n+m; i++){
		if(c[i]>=10) {
			c[i+1] += c[i]/10;
			c[i] %= 10;
		}
	}
	for(j = n+m-1; j>0; j--) {
		if(c[j]!=0) break;
	}
	for (int i = j; i >= 0; i--) {
		ans += to_string(c[i]);
	}
    return ans;
}
string Fac(int n) {
	if (fac[n] != "") return fac[n];
	return fac[n] = mul(to_string(n), Fac(n-1));
}
int main(int argc, char** argv) {
	int n, t, ans;
	char c;
	fac[0] = "1";
	fac[1] = "1";
	fac[2] = "2";
	scanf("%d", &t);
	while (t--) {
		ans = 0;
		scanf("%d %c", &n, &c);
		Fac(n);
		for (int i = 0; i < fac[n].length(); i++) {
			if (fac[n][i] == c) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}