#include <cstdio>
int cnt[4];
int main(int argc, char** argv) {
	int n, age;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &age);
		if (age >= 0 && age <= 18) {
			cnt[0]++;
		}
		else if (age >= 19 && age <= 35) {
			cnt[1]++;
		}
		else if (age >= 36 && age <= 60) {
			cnt[2]++;
		}
		else if (age >= 61) {
			cnt[3]++;
		}
	}
	for (int i = 0; i < 4; i++) {
		printf("%.2lf%%\n", 100.0 * cnt[i] / n);
	}
	return 0;
}