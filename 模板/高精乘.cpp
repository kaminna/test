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