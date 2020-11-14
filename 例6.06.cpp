//法一：
#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char str1[40], str2[20];
	cout << "Input two strings:\n";
	cin.getline(str1, 20);
	cin.getline(str2, 20);
	strcat(str1, str2);
	cout << str1 << endl;
	return 0;
}
//法二：
#include<iostream>
using namespace std;
int main(void)
{
	char str1[40], str2[20];
	int i, j;
	cout << "Input two strings:\n";
	cin.getline(str1, 20);
	cin.getline(str2, 20);
	i = 0;
	while (str1[i] != '\0')
		i++;
	j = 0;
	while (str2[j] != '\0');
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	cout << str1 << endl;
	return 0;
