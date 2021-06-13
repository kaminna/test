#include <stdio.h>
int main(int argc, char** argv) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		getchar(); //把回车读走
		int cnt, ans = 0;
		char s;
		for (int i = 0; i < 7; i++) {
			cnt = 0;
			for (int j = 0; j < n * 7; j++) {
				if (i == 1 || i == 3 || i == 5) { //只看1、3、5行
					if (j % 7 == 6) {
						if (cnt == 4) {
							ans += 2;
						}
						else if (cnt == 3) {
							ans += 1;
						}
						else {
							ans += cnt;
						}
						cnt = 0;
					}
				}
				scanf("%c", &s);
				if (s == '#') {
					cnt++; //记录每行的#的个数
				}
			}
			scanf("%c", &s); //把回车读走
		}
		printf("%d\n", ans);
	}
	return 0;
}