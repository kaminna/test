#include <iostream>
#include <string>
using namespace std;
struct hgrufdhg {
	int a;
	int b;
	int c;
	string name;
} th[1001];
int n, m, ans, i, o;
int main() {
	cin >> m >> n;
	m = 21 - m;
	for (i = 1; i <= n; i++)
		cin >> th[i].a >> th[i].b >> th[i].c >> th[i].name;
	for (i = 1; i < n; i++) {
		for (o = i + 1; o <= n; o++) {
			if (th[i].name == th[o].name) {
				if (th[i].a + th[o].a > th[i].c) {
					th[o].a += th[i].a;
					th[o].a -= th[i].c;
					th[i].a = th[i].c;
				}
				else {
					th[i].a += th[o].a;
					th[o].a = 0;
				}
			}
		}
	}
	for (i = 1; i <= n; i++)
		th[i].b *= th[i].a;
	for (i = 1; i <= n; i++)
		for (o = i + 1; o <= n; o++) {
			if (th[i].b < th[o].b) {
				th[0] = th[i];
				th[i] = th[o];
				th[o] = th[0];
			}
		}
	i = 1;
	while (m--) {
		ans += th[i++].b;
	}
	cout << ans;
	return 0;
}