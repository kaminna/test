#include <stdio.h> 
int main(int argc, char** argv) {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n > m) {
		printf("-1\n1\n-1\n");
	}
	else if (n == m) {
		printf("1\n1\n1\n");
	}
	else {
		printf("1\n-1\n-1\n");
	}
	return 0;
}
