int titleToNumber(char * columnTitle) {
	int len = strlen(columnTitle), ans = 0;
	long long pow = 1;
	for (int i = len - 1; i >= 0; i--) {
		ans += (columnTitle[i] - 'A' + 1) * pow;
		pow *= 26;
	}
	return ans;
}