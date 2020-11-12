#include<iostream>
using namespace std;
#define k -5
int main(void)
{
#if k>0;
	cout << "a>0" << endl;
#elif k<0
	cout << "a<0" << endl;
#else
	cout << "a=0" << endl;
#endif
	return 0;
}
