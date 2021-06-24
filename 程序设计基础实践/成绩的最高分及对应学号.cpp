#include <bits/stdc++.h>
using namespace std;
struct students {
	int no;
	int score;
};
students Maxscore(students* stu, int n) {
	students max;
	max.no = stu[0].no;
	max.score = stu[0].score;
	for (int i = 1; i < n; i++) {
		if (stu[i].score > max.score) {
			max.no = stu[i].no;
			max.score = stu[i].score;
		}
	}
	return max;
}
int main() {
	ios::sync_with_stdio(false);
	students stu[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].no >> stu[i].score; 
	}
	students m;
	m = Maxscore(stu, n);
	cout << m.score << ' ' << m.no;
	return 0;
}

