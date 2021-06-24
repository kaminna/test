#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	char** name = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		name[i] = (char*)malloc(sizeof(char) * 50);
	}
	
	for (int i = 0; i < n; i++) {
		cin >> name[i];
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (strcmp(name[j], name[j + 1]) > 0) {
				char t[100];
				strcpy(t, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], t);
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << name[i] << endl;
	}
	
	for (int i = 0; i < n; i++) {
		free(name[i]);
	}
	free(name);
	return 0;
}

