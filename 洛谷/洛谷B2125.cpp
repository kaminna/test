#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct students
{
	int score;
	char name[20];
};
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	students s, max;
	max.score = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &s.score, &s.name);
		if (s.score > max.score) {
			swap(max, s);
		}
	}
	printf("%s", max.name);
	return 0;
}