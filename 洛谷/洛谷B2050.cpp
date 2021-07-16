#include <cstdio>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > c) {
		swap(a, c);
	}
	if (b > c) {
		swap(b, c);
	}
	if (a > b) {
		swap(a, b);
	}
	if (a + b > c) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}