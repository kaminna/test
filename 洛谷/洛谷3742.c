#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	char s1[101], s2[101];
	scanf("%d", &n);
	scanf("%s%s", s1, s2);
	for (int i = 0; i < n; i++)
	{
		if (s1[i] == s2[i])
		{
			s1[i]++;
			continue;
		}
		if (s1[i] < s2[i])
		{
			printf("-1");
			return 0;
		}
		if (s1[i] > s2[i])
		{
			s1[i] = s2[i];
		}
	}
	printf("%s", s1);
	return 0;
}
/*
	2
	s1:ab
	s2:aa
*/
/*
	5
	s1:nzwzl
	s2:niwel
	xiyez
*/
/*
	2
	s1:ab
	s2:ba
	-1
*/