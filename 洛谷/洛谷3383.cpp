#include <bits/stdc++.h>
using namespace std;
bool isPrime[100000010]; //判断isPrime[i]的i是否是素数
//Prime[0]来存长度,Prime[i]存第i个素数
int Prime[6000010];
void is_Prime(int n) {
	isPrime[1] = true;
	for(int i = 2; i <= n; i++) {
		if(!isPrime[i]) Prime[++Prime[0]] = i;
		for(int j = 1; j <= Prime[0] && i*Prime[j] <= n; j++) {
			isPrime[i * Prime[j]] = true;
			if(!(i % Prime[j])) break;
		}
	}
}

int main(int argc, char** argv) {
	int n, q;
	scanf("%d %d", &n, &q);
	is_Prime(n);
	while (q--) {
		int k;
		scanf("%d", &k);
		printf("%d\n", Prime[k]);
	}
	return 0;
}