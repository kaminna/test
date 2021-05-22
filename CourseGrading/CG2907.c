#include <stdio.h>
int main(int argc, char** argv) {
	int n, cnt = 0;
	scanf("%d", &n);
	while (n--) {
		int sure, isOne = 0;
		for (int i = 1; i <= 3; i++) {
			scanf("%d", &sure);
			if (sure == 1) {
				isOne++;
			}
		}
		if (isOne >= 2) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}