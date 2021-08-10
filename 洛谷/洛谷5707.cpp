#include <cstdio>
int main(int argc, char** argv) {
	int s, v, min = 10, h = 7;
	scanf("%d%d", &s, &v);
	min += s / v;
	if (s%v) {
		min++;
	}
	h -= min / 60;
	if (min % 60) {
		min %= 60;
	}
	else {
		min = 60;
	}
	if (h < 0) {
		h += 24;
	}
	printf("%02d:%02d", h, 60 - min);
	return 0;
}