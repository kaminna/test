#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int score;
	int a;
	cout << "Input score(0-100):";
	cin >> score;
	a = score / 10;
	switch (a)
	{
	case 10:
	case 9:cout << "优" << endl; break;
	case 8:cout << "良" << endl; break;
	case 7:cout << "中" << endl; break;
	case 6:cout << "及格" << endl; break;
	default:cout << "不及格" << endl;
	}
	system("pause");
	return 0;
}
