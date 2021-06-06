#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	int T;
	scanf("%d", &T);
	long long a, b;
	while (T) {
		long long D;
		int n, k;
		scanf("%d%d%lld", &n, &k, &D);
		int* ans = (int*)malloc(sizeof(int)*n);
		double sum = 0, t;
		for (int i = 0; i < n; i++) {
			scanf("%lld%lld", &a, &b);
			t = ceil(1.0 * a/(D - b));//向上取整
			ans[i] = (int)t;//存起来
			sum += t;//求总和
		}
		sort(ans, ans + n);//排序
		int c = 0;
		for (int i = k; i < n; i++) {
			c += ans[i];//后n-k个数据之和
		}
		printf("%d\n", (int)(sum - c));//总和减去后面n-k个数据
		free(ans);
		T--;
	}
	return 0;
}