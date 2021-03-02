#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i = 0, t = 1, sum = 0;
	while (sum < 1000)
	{
		i++;
		t = t*i;
		sum = sum + t;
	}
	cout << "sum=" << sum << '\t' << "i=" << i << endl;
	system("pause");
	return 0;
}
