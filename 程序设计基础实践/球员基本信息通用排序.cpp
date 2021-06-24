#include <bits/stdc++.h>
using namespace std;
struct Player {
	char name[100];
	int no;
};
void Scan(Player* info, int n) {
	for (int i = 0; i < n; i++) {
		cin >> info[i].name >> info[i].no;
	}
}
void Bubble_Sort(Player* info, int n, int m) {
	for (int i = 0; i < n - 1; i++) {
		int flag = 1;
		for (int j = 0; j < n - 1 - i; j++) {
			if (m == 1) {
				if (info[j].no > info[j + 1].no) {
					swap(info[j], info[j + 1]);
					flag = 0; 
				}
			}
			if (m == 2) {
				if (info[j].no < info[j + 1].no) {
					swap(info[j], info[j + 1]);
					flag = 0;
				}
			}
		} 
		if (flag) {
			break;
		}
	}
}
void Print(Player* info, int n) {
	for (int i = 0; i < n; i++) {
		cout << info[i].name << ' ' << info[i].no << endl;
	}
}
int main() {
	ios::sync_with_stdio(false);
	int n, c;
	cin >> n;
	Player info[50];
	Scan(info, n);
	cin >> c;
	Bubble_Sort(info, n, c);
	Print(info, n);
	return 0;
}

