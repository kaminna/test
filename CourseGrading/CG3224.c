#include <stdio.h>
int main(int argc, char** argv) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		getchar(); //�ѻس�����
		int cnt, ans = 0;
		char s;
		for (int i = 0; i < 7; i++) {
			cnt = 0;
			for (int j = 0; j < n * 7; j++) {
				if (i == 1 || i == 3 || i == 5) { //ֻ��1��3��5��
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
					cnt++; //��¼ÿ�е�#�ĸ���
				}
			}
			scanf("%c", &s); //�ѻس�����
		}
		printf("%d\n", ans);
	}
	return 0;
}