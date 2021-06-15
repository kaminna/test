#include <stdio.h>
int main(int argc, char** argv) {
	char str[14];
	scanf("%s", &str);
	int i, j = 1, sum = 0;
	for (i = 0; i < 11; i++) {
		if (str[i] == '-') {
			continue; 
		}
		else {
		sum += ((str[i] - 48) * j);
		j++;
		}
	}
	int rec = sum % 11;
	if (rec == 10) {
		if (str[12] == 'X') {
			printf("Right");
		}
		else {
			for (i = 0; i < 12; i++) {
				printf("%c", str[i]);
			}
			printf("X");
		}
	}
	else {
		if (str[12] - 48 == rec) {
			printf("Right");
		}
		else {
			for (i = 0; i < 12; i++) {
				printf("%c", str[i]);
			}
			printf("%d", rec);
		}
	}
	return 0;
}

