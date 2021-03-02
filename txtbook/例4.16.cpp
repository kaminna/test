#include<iostream>
#include<cstdlib>
using namespace std;
int max(int x = 70, int y = 60, int z = 50)
{
	int m;
	if (x > y) m = x;
	else m = y;
	if (z > m) m = z;
	return m;
}
int main()
{
	int s1, s2, s3;
	s1 = max(10, 20, 30);
	cout << "s1=" << s1 << endl;
	s2 = max(10, 20);
	cout << "s2=" << s2 << endl;
	s3 = max();
	cout << "s3=" << s3 << endl;
	system("pause");
	return 0;
}
