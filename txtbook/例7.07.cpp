#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
struct word
{
	char english[20];
	char chinese[20];
};
int ncount = 0;
struct word str[100];
void tianjia()
{
	char ch;
	do
	{
		cout << "录入词库！！！\n";
		cout << "请输入词库中的英语单词：\n";
		cin >> str[ncount].english;
		cout << "\n请输入相应的中文意思：\n";
		cin >> str[ncount].chinese;
		ncount++;
		cout << "是否继续录入？y/n!!!\n";
		cin >> ch;
	} while (ch == 'y');
}
void shuchu()
{
	int i = 0;
	cout << "输出词库中所有的词！！！\n";
	if (ncount <= 0)
	{
		cout << "没有任何单词，无法输出！！！\n"; return;
	}
	else
	{
		for (i = 0; i < ncount; i++)
		{
			cout << "英文单词是：" << str[i].english;
			cout << "相应的中文意思是：" << str[i].chinese << endl;
		}
		cout << "词库所有单词输入完毕！！！\n";
	}
}
void fanyi1()
{
	int i; char ch[20];
	cout << "请输入英语单词：\n";
	cin >> ch;
	bool found = false;
	for (i = 0; i < ncount; i++)
	{
		if (strcmp(ch, str[i].english)==0)
		{
			found = true;
			cout << "\n相应的中文意思是：" << str[i].chinese << endl;
		}
	}
	if (found == false)
		cout << "\n库里没有对应的单词！" << endl;
}
void test()
{
	int i, j, t, a[5];
	char ch[20];
	int point = 0;
	bool f;
	if (ncount <= 5)
	{
		cout << "请先添加词库" << endl;
		return;
	}
	for (i = 0; i <= 4; i++)
	{
		do
		{
			f = false;
			t = rand() % ncount;
			for (j = 0; j < i; j++)
			{
				if (a[j] == t)
				{
					f = true; break;
				}
			}
		} while (f == true);
		a[i] = t;
		cout << "测试的单词是：" << str[t].english;
		cout << "\n相应的中文意思是：";
		cin >> ch;
		if (strcmp(ch, str[t].chinese) == 0)
		{
			point++;
			cout << "恭喜你，答对了!!!\n";
		}
		else
			cout << "很遗憾，答错了!!!正确的翻译是： " << str[t].chinese << endl;
	}
	cout << "正确：" << point << "个," << "正确率为：" << point * 100 / 5 << "%" << endl;
}
int main()
{
	int n;
	while (1)
	{
		cout << "*************背单词系统********************\n";
		cout << "*************1.添加词库********************\n";
		cout << "*************2.汉译英**********************\n";
		cout << "*************3.英译汉**********************\n";
		cout << "*************4.输出所有词库****************\n";
		cout << "*************5.随机测试********************\n";
		cout << "*************0.退出************************\n";
		cout << "请输入你要进行的操作：\n";
		cin >> n;
		switch (n)
		{
		case 1:tianjia(); break;
		case 2:fanyi2(); break;
		case 3:fanyi1(); break;
		case 4:shuchu(); break;
		case 5:test(); break;
		case 0:exit(0);
		default:cout << "你输入了错误的操作，无法执行！！！";
		}
	}
	return 0;
}
