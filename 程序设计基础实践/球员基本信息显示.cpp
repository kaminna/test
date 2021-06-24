#include <bits/stdc++.h>
using namespace std;
struct Player {
	char name[100];
	int no;
};
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	Player info[50];
	Player* p = info + n - 1;
	for (int i = 0; i < n; i++) {
		cin >> info[i].name >> info[i].no;
	}
	while (p != info - 1) {
		cout << (*p).name << ' ' << (*p).no << endl;
		p--;
	}
	return 0;
}

