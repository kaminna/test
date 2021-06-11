#include <cstdio>
int main(int argc, char** argv) {
	int t;
	scanf("%d", &t);
	int n;
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		int cnt = 0;
		int j = 1;
		while (j<n) {
			j *= 2;
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
} 
