#include <cstdio>
#include <cmath>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	for (int i = (int)sqrt(n); i < n; i++) {
		if (n%i == 0) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}