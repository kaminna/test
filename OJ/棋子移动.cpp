#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b, c, g;
	cin >> a >> b >> c;
	if (a + 1 == b && b + 1 == c)
		cout << 0;
	else if (a + 1 == b || b + 1 == c || a + 2 == b || b + 2 == c)
		cout << 1;
	else
		cout << 2;


	return 0;
}