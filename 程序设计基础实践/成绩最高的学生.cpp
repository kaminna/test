#include <cstdio>
struct students {
	int nums;
	int score;
};
int main() {
	int n;
	scanf("%d", &n);
	students stu[100], max;
	max.nums = 1000;
	max.score = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &stu[i].nums, &stu[i].score);
		if (stu[i].score > max.score) {
			max.nums = stu[i].nums;
			max.score = stu[i].score;
		}
	}
	printf("%d %d", max.nums, max.score);
	return 0;
} 

