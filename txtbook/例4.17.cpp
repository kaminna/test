#include<math.h>
float f(float x)
{
	float y;
	y = ((x - 5.0)*x + 16.0)*x - 80.0;
	return y;
}
float xpoint(float x1, float x2)
{
	float y;
	y = (x1*f(x2) - x2*f(x1)) / (f(x2) - f(x1));
	return y;
}
float root(float x1, float x2)
{
	float x, y, y1;
	y1 = f(x1);
	do
	{
		x = xpoint(x1, x2);
		y = f(x);
		if (y*y1 > 0)
		{
			y1 = y;
			x1 = x;
		}
		else x2 = x;
	} while (fabs(y) >= 0.0001);
	return x;
}
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	float x1 = 2, x2 = 6, x;
	x = root(x1, x2);
	cout << "A root of equation is:" << x << "\n";
	system("pause");
	return 0;
}
