#include <cstdio>
int main() {
	int n;
	scanf("%d", &n);
	int nums[100];
	for (int i = 0; i<n; i++) {
		scanf("%d", &nums[i]); 
		for (int j = 0; j < nums[i]; j++) {
			printf("AC ");
		}
		printf("\n");
	}
	return 0;
} 
