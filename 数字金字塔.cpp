#include<iostream>
using namespace std;
int n;
int ans;
int a[1005][1005];
void dfs(int x, int y, int cur)
{
	if (x == n)
	{
		if (cur > ans) ans = cur;
		return;
	}
	dfs(x + 1, y, cur + a[x + 1][y]);
	dfs(x + 1, y + 1, cur + a[x + 1][y + 1]);
}
int main(void)
{
	cin >> n;
	for (int i = 1; i <= n;i++)
	for (int j = 1; j <= i; j++)
		cin >> a[i][j];
	ans = 0;
	dfs(1, 1, a[1][1]);
	cout << ans;
	return 0;
}
