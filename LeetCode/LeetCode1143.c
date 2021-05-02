int longestCommonSubsequence(char * text1, char * text2) {
	int len1 = strlen(text1);
	int len2 = strlen(text2);
	int** cache = malloc((len1 + 1) * sizeof(int*));
	for (int i = 0; i <= len1; i++) {
		cache[i] = calloc((len2 + 1), sizeof(int));
	}
	for (int m = 1; m <= len1; m++) {
		for (int n = 1; n <= len2; n++) {
			if (text1[m - 1] == text2[n - 1]) {
				cache[m][n] = cache[m - 1][n - 1] + 1;
			}
			else if (cache[m - 1][n] >= cache[m][n - 1]) {
				cache[m][n] = cache[m - 1][n];
			}
			else {
				cache[m][n] = cache[m][n - 1];
			}
		}
	}
	int result = cache[len1][len2];
	for (int i = 0; i <= len1; i++) {
		free(cache[i]);
	}
	free(cache);
	return result;
}