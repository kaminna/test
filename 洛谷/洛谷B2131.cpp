#include <cstdio>
struct Info {
	char name[10];
	float tem;
	int cough;
};
int main(int argc, char** argv) {
	int n, cnt = 0;
	scanf("%d", &n);
	Info nums;
	for (int i = 0; i < n; i++) {
		scanf("%s %f %d", nums.name, &nums.tem, &nums.cough);
		if (nums.tem >= 37.5 && nums.cough) {
			printf("%s\n", nums.name);
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}