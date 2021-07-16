#include <cstdio>
int main(int argc, char** argv) {
	int chinese, math, english, cnt = 0;
	scanf("%d%d%d", &chinese, &math, &english);
	if (chinese < 60) {
		cnt++;
	}
	if (math < 60) {
		cnt++;
	}
	if (english < 60) {
		cnt++;
	}
	if (cnt == 1) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}