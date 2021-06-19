#include <cstdio>
struct students {
	char name[50];
	int age;
	int score;
};
void Improve(students &s) {
	s.age++;
	if (s.score == 0 || s.score == 1) {
		s.score = 120;
	}
	else {
		double a = s.score;
		a *= 1.2;
		s.score = (int)a;
		if (s.score > 700) {
			s.score = 700;
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);
	students stu[500];
	for (int i = 0; i < n; i++) {
		scanf("%s%d%d", &stu[i].name, &stu[i].age, &stu[i].score);
		Improve(stu[i]);
		printf("%s %d %d\n", stu[i].name, stu[i].age, stu[i].score);
	}
	return 0;
}

