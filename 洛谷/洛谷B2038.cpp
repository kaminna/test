#include <cstdio>
int main(int argc, char** argv) {
	char c;
	scanf("%c", &c);
	if (c & 1) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}