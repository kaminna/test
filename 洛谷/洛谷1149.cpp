#include <cstdio>
int main() {
	int n, a, b, c, cnt = 0;
	int nums[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	scanf("%d", &n);
	n -= 4;
	for (int j = 0; j <= 1111; j++) {
		for (int i = 0; i <= 1111; i++) {
			a = 0;
			b = 0;
			c = 0;
			int t1 = j, t2 = i, t3 = j + i;
			while (t1!=-1) {
				a += nums[t1%10];
				t1 /= 10;
				if (t1 == 0) {
					t1 = -1;
				}
			}
			while (t2!=-1) {
				b += nums[t2%10];
				t2 /= 10;
				if (t2 == 0) {
					t2 = -1;
				}
			}
			while (t3!=-1) {
				c += nums[t3%10];
				t3 /= 10;
				if (t3 == 0) {
					t3 = -1;
				}
			}
			if (a+b+c == n) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
