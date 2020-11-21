#include<iostream>
using namespace std;
const int N = 5;
struct student
{
	long number;
	char name[12];
	float score[4];
}stu[N];
void input();
void caculate();
void output();
int main(void)
{
	input();
	caculate();
	output();
	return 0;
}
void input()
{
	cout << "Input the number,name and score:\n";
	for (int i = 0; i < N; i++)
	{
		cout << i << " number:";
		cin >> stu[i].number;
		if (stu[i].number == 0)break;
		cout << "  name:"; cin >> stu[i].name;
		cout << "  English:"; cin >> stu[i].score[0];
		cout << "  Math:"; cin >> stu[i].score[1];
		cout << "  Chinese:"; cin >> stu[i].score[2];
	}
}
void caculate()
{
	for (int i = 0; i < N; i++)
	{
		if (stu[i].number == 0)break;
		stu[i].score[3] = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
	}
}
void output()
{
	for (int i = 0; i < N; i++)
	{
		if (stu[i].number == 0)break;
		cout << i << ": " << stu[i].number << " " << stu[i].name << " ";
		for (int j = 0; j <= 3; j++)
			cout << stu[i].score[j] << " ";
		cout << endl;
	}
}
