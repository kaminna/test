#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	scanf("%d", &n);
	long long a[1000] = { 47,74,4477,4747,4774,7447,7474,7744,
444777,447477,447747,447774,474477,474747,474774,477447,477474,477744,
744477,744747,744774,747447,747474,747744,774447,774474,774744,777444,
44447777,44474777,44477477,44477747,44477774,44744777,44747477,44747747,44747774,
44774477,44774747,44774774,44777447,44777474,44777744,47444777,47447477,47447747,
47447774,47474477,47474747,47474774,47477447,47477474,47477744,47744477,47744747,
47744774,47747447,47747474,47747744,47774447,47774474,47774744,47777444,74444777,
74447477,74447747,74447774,74474477,74474747,74474774,74477447,74477474,74477744,
74744477,74744747,74744774,74747447,74747474,74747744,74774447,74774474,74774744,
74777444,77444477,77444747,77444774,77447447,77447474,77447744,77474447,77474474,
77474744,77477444,77744447,77744474,77744744,77747444,77774444,4444477777 };
	for (int i = 0; i < 1000; i++)
	{
		if (a[i] >= n)
		{
			printf("%lld", a[i]);
			break;
		}
	}
	return 0;
}