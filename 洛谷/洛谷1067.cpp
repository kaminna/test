#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int n, val, t;
	scanf("%d", &n);
	t = n;
	while (t != -1) {
		scanf("%d", &val);
		if (val) {
			if (t != n && val > 0) printf("+");
			if (t && val == -1) printf("-");
			if (t == 0) printf("%d", val);
			else {
				if (val > 1) printf("%d", val);
				if (val < -1) printf("%d", val);
			}
			if (t > 1) {
				printf("x^%d", t);
			}
			else if (t == 1) printf("x");
		}
		t--;
	}
	return 0;
}