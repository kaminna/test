#include <cstdio>
int main(int argc, char** argv) {
	char s;
	int cnt = 0;
	while (~scanf("%c", &s)) {
		if (s == '"') {
			cnt++;
			if (cnt & 1) {
				printf("``");
			}
			else {
				printf("''");
			}
		}
		else {
			printf("%c", s);
		}
	}
	return 0;
}