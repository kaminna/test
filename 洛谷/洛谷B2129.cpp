#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("%.3lf", max(max(a, b), c) / (max(max(a + b, b), c) * max(max(a, b), b + c)));
	return 0;
}