#include<iostream>
using namespace std;
int main(void)
{
	float ave, score[50];
	float sum = 0;
	int i, count;
	cout << "Please input 50 student's score:" << endl;
	for (i = 0; i < 50; i++)
		cin >> score[i];
	for (i = 0; i < 50; i++)
		sum += score[i];
	ave = sum / 50;
	cout << "average=" << ave << endl;
	cout << "the scores which are below the average:";
	count = 0;
	for (i = 0; i < 50; i++)
	if (score[i] < ave)
	{
		cout << score[i] << " ";
		count++;
	}
	cout << "the number which are below the average:";
	cout << count;
	return 0;
}
