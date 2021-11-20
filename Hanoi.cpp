#include <cstdio>
void Hanoi(char c, int n, char target) {
	char tmp = 'A' + 'B' + 'C' - c - target;
	if (n == 1) {
		printf("%c->%c\n", c, target);
		return ;
	}
	if (n == 2) {
		printf("%c->%c\n", c, tmp);
		Hanoi(c, n-1, target);
		Hanoi(tmp, n-1, target);
		return ;
	}
	Hanoi(c, n-1, tmp);
	Hanoi(c, 1, target);
	Hanoi(tmp, n-1, target);
}
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	Hanoi('A', n, 'C');
	return 0;
}