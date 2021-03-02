#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char str[3][20], string[20];
	int i;
	cout << "Input three strings:\n";
	for (i = 0; i < 3; i++)
		cin.getline(str[i], 20);
	if (strcmp(str[0], str[1])>0)
		strcpy(string, str[0]);
	else
		strcpy(string, str[1]);
	if (strcmp(str[2], string) > 0)
		strcpy(string, str[2]);
	cout << string << endl;
	return 0;
}
