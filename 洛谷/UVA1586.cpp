#include <cstdio>
#include <cstring>
#include <cstdlib>
int main(int argc, char** argv) {
	int n, len;
	char s[100], nums[3];
	double num, ans;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		len = strlen(s);
		ans = 0;
		for (int i = 0; i < len; i++) {
			num = 0;
			if (s[i] == 'C') {
				for (int k = 0, j = i + 1; j < i + 3; j++, k++) {
					nums[k] = s[j];
				}
				nums[2] = '\0';
				num += atoi(nums);
				if (num == 0) {
					num = 1;
				}
				ans += num * 12.01;
			}
			else if (s[i] == 'H') {
				for (int k = 0, j = i + 1; j < i + 3; j++, k++) {
					nums[k] = s[j];
				}
				nums[2] = '\0';
				num += atoi(nums);
				if (num == 0) {
					num = 1;
				}
				ans += num * 1.008;
			}
			else if (s[i] == 'O') {
				for (int k = 0, j = i + 1; j < i + 3; j++, k++) {
					nums[k] = s[j];
				}
				nums[2] = '\0';
				num += atoi(nums);
				if (num == 0) {
					num = 1;
				}
				ans += num * 16.00;
			}
			else if (s[i] == 'N') {
				for (int k = 0, j = i + 1; j < i + 3; j++, k++) {
					nums[k] = s[j];
				}
				nums[2] = '\0';
				num += atoi(nums);
				if (num == 0) {
					num = 1;
				}
				ans += num * 14.01;
			}
		}
		printf("%.3lf\n", ans);
	}
	return 0;
}