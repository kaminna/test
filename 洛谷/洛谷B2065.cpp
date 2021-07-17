#include <cstdio>
int main(int argc, char** argv) {
	int n, illnees, save;
	double news, odd;
	scanf("%d", &n);
	scanf("%d%d", &illnees, &save);
	odd = 1.0 * save / illnees;
	for (int i = 1; i < n; i++) {
		scanf("%d%d", &illnees, &save);
		news = 1.0 * save / illnees;
		if (news - odd > 0.05) {
			printf("better\n");
		}
		else if (news - odd < -0.05) {
			printf("worse\n");
		}
		else {
			printf("same\n");
		}
	}
	return 0;
}