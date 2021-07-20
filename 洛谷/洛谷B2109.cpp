#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv) {
	char str[300];
	cin.getline(str, 300);
	int len = strlen(str), cnt = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}