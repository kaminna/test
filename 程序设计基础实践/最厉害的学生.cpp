#include <cstdio>
#include <cstring>
struct student {
	char name[100];
	int pro;
	int math;
	int english;
};
int main() {
	int n, max = -1, sum;
	scanf("%d", &n);
	student stu[1100], Maxstu;
	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", &stu[i].name, &stu[i].pro, &stu[i].math, &stu[i].english);
		sum = (stu[i].pro + stu[i].math + stu[i].english);
		if (sum > max) {
			Maxstu.pro = stu[i].pro;
			Maxstu.math = stu[i].math;
			Maxstu.english = stu[i].english;
			strcpy(Maxstu.name, stu[i].name);
			max = sum;
		}
	}
	printf("%s %d %d %d", Maxstu.name, Maxstu.pro, Maxstu.math, Maxstu.english);
	return 0;
}

