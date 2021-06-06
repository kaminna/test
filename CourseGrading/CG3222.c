#include <stdio.h>
int main(int argc, char** argv) {
	int T;
	scanf("%d", &T);
	int x;
	while (T) {
		scanf("%d", &x);
		int y = x + 1;
		while (1) {
			if (y % 7 != 0) {
				int m = y;
				int flag = 1;
				while (m) {
					int k = m % 10;
					if (k == 7) {
						flag = 0;
						break;
					}
					m /= 10;
				}
				if (flag) {
					printf("%d\n", y);
					break;
				}
			}
			y++;
		}
		T--;
	}
	return 0;
}