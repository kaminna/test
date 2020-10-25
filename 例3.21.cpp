#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			continue;
		cout << i << endl;
	}
	system("pause");
	return 0;
}
