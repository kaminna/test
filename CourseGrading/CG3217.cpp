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
			t = ceil(1.0 * a/(D - b));//����ȡ��
			ans[i] = (int)t;//������
			sum += t;//���ܺ�
		}
		sort(ans, ans + n);//����
		int c = 0;
		for (int i = k; i < n; i++) {
			c += ans[i];//��n-k������֮��
		}
		printf("%d\n", (int)(sum - c));//�ܺͼ�ȥ����n-k������
		free(ans);
		T--;
	}
	return 0;
}