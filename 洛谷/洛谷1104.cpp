#include <iostream>
#include <algorithm>
using namespace std;
struct Birthday {
	char name[50];
	int year;
	int month;
	int day;
	int index;
};
bool cmp(Birthday a, Birthday b) {
	if (a.year == b.year) {
		if (a.month == b.month) {
			if (a.day == b.day) {
				return a.index < b.index;
			}
			return a.day < b.day;
		}
		return a.month < b.month;
	}
	return a.year < b.year;
}
int main(int argc, char** argv) {
	int n;
	Birthday nums[500];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i].name >> nums[i].year >> nums[i].month >> nums[i].day;
		nums[i].index = i;
	}
	sort(nums, nums + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << nums[i].name << endl;
	}
	return 0;
}