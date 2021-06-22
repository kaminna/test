#include <cstdio>
int main() {
	double sum;
	for (int i = 20; i >= 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			for (int k = j - 1; k >= 0; k--) {
				for (int z = k - 1; z >= 0; z--) {
					sum = 0;
					sum += ((1.0 / i) + (1.0 / j) + (1.0 / k) + (1.0 / z));
					if (sum == 1) {
						printf("%d,%d,%d,%d,0\n", i, j, k, z);
					}
				}
			}
		}
	}
	return 0;
}

