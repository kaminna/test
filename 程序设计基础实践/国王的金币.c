#include <stdio.h>
int main(int argc, char** argv) {
	int K;
	scanf("%d", &K);
	long long sum = 0;
	int i = 1;
	while (1) {
		K -= i;
		if (K < 0) {
			K += i;
			break;
		}
		sum += i * i;
		i++;
	}
	sum += i * K;
	printf("%lld", sum);
	return 0;
}

