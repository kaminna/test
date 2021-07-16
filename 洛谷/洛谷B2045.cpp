#include <cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	if (n == 1 || n == 3 || n == 5) {
		printf("NO");
	}
	else {
		printf("YES");
	}
	return 0;
}