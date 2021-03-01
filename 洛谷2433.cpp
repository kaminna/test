#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T;
	const double PI = 3.141593;
	cin >> T;
	if (T == 1) {
		cout << "I love Luogu!" << endl;
	}
	else if (T == 2) {
		cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
	}
	else if (T == 3) {
		cout << 14 / 4 << endl;
		cout << 14 - 14 % 4 << endl;
		cout << 14 % 4 << endl;
	}
	else if (T == 4) {
		double n;
		n = 500.0 / 3.0;
		cout << n << endl;
	}
	else if (T == 5) {
		cout << (260 + 220) / (12 + 20) << endl;
	}
	else if (T == 6) {
		cout << sqrtf(6 * 6 + 9 * 9) << endl;
	}
	else if (T == 7) {
		int money = 100;
		money += 10;
		cout << money << endl;
		money -= 20;
		cout << money << endl;
		money -= money;
		cout << money << endl;
	}
	else if (T == 8) {
		const double pi = 3.141593;
		double circle, area, volume, r = 5;
		circle = 2 * pi*r;
		area = pi * r*r;
		volume = (4.0 / 3.0)*pi*r*r*r;
		cout << circle << endl;
		cout << area << endl;
		cout << volume << endl;
	}
	else if (T == 9) {
		int i, apple = 1;
		for (i = 1; i < 4; i++)
		{
			apple = (apple + 1) * 2;
		}
		cout << apple << endl;
	}
	else if (T == 10) {
		cout << 9 << endl;
	}
	else if (T == 11) {
		cout << 100.0 / (8 - 5) << endl;
	}
	else if (T == 12) {
		cout << 'M' - 64 << endl;
		cout << (char)(64 + 18) << endl;
	}
	else if (T == 13) {
		int b;
		double v;
		v = 4.0 / 3 * PI * 1064;
		b = pow(v, 1.0 / 3);
		cout << b << endl;
	}
	else if (T == 14) {
		int rmb = 120, r, sum;
		for (r = 0; r <= 120; r++)
		{
			sum = rmb * r;
			if (sum == 3500)
			{
				cout << sum / rmb << endl;
				break;
			}
			rmb--;
		}
	}
	return 0;
}