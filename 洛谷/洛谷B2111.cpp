#include <cstdio>
#include <cstring>
int main(int argc, char** argv) {
	double flag;
	scanf("%lf", &flag);
	char s1[500], s2[500];
	scanf("%s%s", s1, s2);
	int len = strlen(s1), cnt = 0;
	for (int i = 0; i < len; i++) {
		if (s1[i] == s2[i]) {
			cnt++;
		}
	}
	if (1.0*cnt / len > flag) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}