#include <cstdio>
int main(int argc, char** argv) {
	int a, b;
	char c;
	scanf("%d%d %c", &a, &b, &c);
	if (c == '+' || c == '*' || c == '/' || c == '-') {
		if (c == '+') {
			printf("%d", a + b);
		}
		if (c == '-') {
			printf("%d", a - b);
		}
		if (c == '*') {
			printf("%d", a * b);
		}
		if (c == '/') {
			if (b == 0) {
				printf("Divided by zero!");
			}
			else {
				printf("%d", a / b);
			}
		}
	}
	else {
		printf("Invalid operator!");
	}
	return 0;
}