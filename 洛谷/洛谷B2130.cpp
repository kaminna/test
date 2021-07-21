#include <cstdio>
int main(int argc, char** argv) {
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	if (c == '+') {
		printf("%d", a + b);
	}
	else if (c == '-') {
		printf("%d", a - b);
	}
	else if (c == '*') {
		printf("%d", a*b);
	}
	else if (c == '/') {
		printf("%d", a / b);
	}
	else if (c == '%') {
		printf("%d", a%b);
	}
	return 0;
}