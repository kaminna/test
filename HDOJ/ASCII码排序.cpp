#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	char s[10];
	while (scanf("%s", s) == 1) {
		sort(s, s + 3);
		printf("%c %c %c\n", s[0], s[1], s[2]);
	}
	return 0;
}