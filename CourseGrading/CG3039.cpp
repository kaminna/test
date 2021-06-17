#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;
struct TV {
	int t;
	int v;
};
TV tv[1000];
bool cmp1(const TV &a, const TV &b) {
	return a.t < b.t;
}
bool cmp2(const TV &a, const TV &b) {
	return a.v < b.v;
}
int main() {
	int T;
	scanf("%d", &T);
	while (T) {
		int n, m, t, i, sum1 = 0, sum2 = 0;
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++) {
			scanf("%d", &tv[i].t);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &tv[i].v);
		}
		sort(tv, tv + n, cmp1);
		t = m;
		i = 0;
		while (t>=0 and i<n) {
			t -= tv[i].t;
			if (t < 0) {
				break;
			}
			sum1 += tv[i].v;
			i++;
		}
		sort(tv, tv + n, cmp2);
		t = m;
		i = n - 1;
		while (t >= 0 and i>=0) {
			t -= tv[i].t;
			if (t < 0) {
				break;
			}
			sum2 += tv[i].v;
			i--;
		}
		if (sum1 == sum2) {
			printf("SAME\n");
		}
		else if (sum1 > sum2) {
			printf("A\n");
		}
		else {
			printf("B\n");
		}
		T--;
	}
	return 0;
}
