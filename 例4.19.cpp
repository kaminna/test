int sct(int m, int n)
{
	int temp, a, b;
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	a = m; b = n;
	while (b != 0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	return (m*n / a);
}
int main()
{
	int x, y, g;
	cout << "请输入两个整数：";
	cin >> x >> y;
	g = sct(x, y);
	cout << "最小公倍数为：" << g << endl;
	system("pause");
	return 0;
}
