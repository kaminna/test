#include<iostream>
#include<iomanip>
using namespace std;
#define N 5
#define M 5
int main(void)
{
	int s[N][M];
	float sum;
	int i, j;
	cout << "Input data:\n";
	for (i = 0; i < N; i++)
	for (j = 0; j < M - 1; j++)
		cin >> s[i][j];
	for (i = 0; i < N; i++)
	{
		sum = 0.0;
		for (j = 1; j < M - 1; j++)
			sum = sum + s[i][j];
		s[i][j] = sum / (M - 2);
	}
	cout << setw(5) << "  学号" << " 语文 数学 英语 平均成绩" << endl;
	cout << "---------------------------\n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			cout << setw(6) << s[i][j];
		cout << endl;
	}
	cout << "----------------------------\n";
	return 0;
}
