#include<iostream>
using namespace std;
int Josephus(int Child[], int n, int m);
int main(void)
{
	const int num = 6;
	int persons[num], winner;
	for (int i = 0; i < num; i++)
		persons[i] = i + 1;
	winner = Josephus(persons, num, 2);
	cout << "最后获胜小孩的序号：" << winner << endl;
	return 0;
}
int Josephus(int Child[], int n, int m)
//Child为保存小孩序号的数组；n为小孩的个数；m为数小孩的个数
{
	int i = -1, j = 0, k = 0;
	while (1)
	{
		for (j = 0; j < m;)
		{
			i = (i + 1) % n;
			if (Child[i] != -1)
				j++;
		}
		if (k == n - 1) break;
		cout << Child[i] << "\t";
		Child[i] = -1;
		k = k + 1;
	}
	cout << endl;
	return (Child[i]);
}
