#include<iostream>
#include<cmath>
using namespace std;
struct Rectangle
{
	int topleft_x;
	int topleft_y;
	int bottomright_x;
	int bottomright_y;
};
Rectangle Input(int x1, int y1, int x2, int y2)
{
	Rectangle tmp;
	tmp.topleft_x = x1;
	tmp.topleft_y = y1;
	tmp.bottomright_x = x2;
	tmp.bottomright_y = y2;
	return tmp;
}
double GetArea(Rectangle rect)
{
	//fabs(x)取绝对值函数
	return fabs((rect.bottomright_x - rect.topleft_x)*(rect.bottomright_y - rect.topleft_y));
}
int main(void)
{
	Rectangle rec;
	int tlx, tly, brx, bry;
	cout << "Please input four integers of rectangle in the order:" << endl;
	cout << "topleft_x  topleft_y  bottomright_x  bottomright_y" << endl;
	cin >> tlx >> tly >> brx >> bry;
	rec = Input(tlx, tly, brx, bry);
	cout << "Area=" << GetArea(rec) << endl;
	return 0;
}
