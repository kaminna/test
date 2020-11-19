#include<iostream>
#include<cstring>
using namespace std;
void max_string(char str[][30], int i);
int main(void)
{
	int i;
	char countryname[5][30];
	for (i = 0; i < 5; i++)
		cin >> countryname[i];
	max_string(countryname, 5);
	return 0;
}
void max_string(char str[][30], int n)
{
	int i;
	char string[30];
	strcpy(string, str[0]);
	for (i = 0; i < n;i++)
	if (strcmp(str[i], string)>0)
		strcpy(string, str[i]);
	cout << endl << "the largest string is: " << string << endl;
}
