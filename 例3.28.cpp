#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(void)
{
	int x, y, z;
	for (x = 0; x <= 100; x++)
	for (y = 0; y <= 100;y++)
	{
		z = 100 - x - y;
		if (5 * x + 3 * y + z / 3.0 == 100)
			cout << setw(5) << x << setw(5) << y << setw(5) << z << endl;
	}
	system("pause");
	return 0;
}
