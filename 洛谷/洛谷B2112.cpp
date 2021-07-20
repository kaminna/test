#include <cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	char s1[10], s2[10];
	for (int i = 0; i < n; i++) {
		scanf("%s%s", s1, s2);
		if ((s1[0] == 'R' && s2[0] == 'S') || (s1[0] == 'S' && s2[0] == 'P') || (s1[0] == 'P' && s2[0] == 'R')) {
			printf("Player1\n");
		}
		else if (s1[0] == s2[0]) {
			printf("Tie\n");
		}
		else {
			printf("Player2\n");
		}
	}
	return 0;
}