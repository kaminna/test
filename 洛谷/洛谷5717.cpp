#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		swap(a, b);
	}
	if (b > c) {
		swap(b, c);
	}
	if (a + b > c) {
		if (a*a + b * b < c*c) {
			printf("Obtuse triangle\n");
			if (a == b) {
				printf("Isosceles triangle\n");
			}
		}
		else if (a*a + b * b == c * c) {
			printf("Right triangle\n");
			if (a == b) {
				printf("Isosceles triangle\n");
			}
		}
		else {
			printf("Acute triangle\n");
			if (a == b) {
				printf("Isosceles triangle\n");
				if (b == c) {
					printf("Equilateral triangle\n");
				}
			}
		}
	}
	else {
		printf("Not triangle\n");
	}
	return 0;
}