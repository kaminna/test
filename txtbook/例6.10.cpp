#include<iostream>
using namespace std;
int main(void)
{
	int i, j, s = 0,n=1;
	int a[5][5];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = n++;
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	for (i = 0; i < 5;i++)
	for (j = 0; j < 5;j++)
	if (j >= i)
		s = s + a[i][j];
	cout << "上三角元素的和为： " << s << endl;
	return 0;
}
