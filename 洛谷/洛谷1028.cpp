#include <cstdio>
#include <iostream>
using namespace std;
int ans[100000];
int fun_dg(int n) {
	if (ans[n]) return ans[n];
	for (int i = 1; i <= n/2; i++) {
		ans[n] += fun_dg(i);
	}
	ans[n]++;
	return ans[n];
}
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	ans[0] = ans[1] = 1;
	printf("%d", fun_dg(n));
	return 0;
}