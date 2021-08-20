#include <cstdio>
using namespace std;
char s[100000000] = { 0 }, oper[6000000] = { 0 };
int main(int argc, char** argv) {
	int n, m;
	scanf("%d%d%s%s", &n, &m, s, oper);
	for (int i = 0; i < m; i++) {
		switch (oper[i]) {
		case '*': s[n++] = '0';  break;
		case '/': s[--n] = '\0'; break;
		case '+': for (int k = n; s[--k] != '0' && (s[k] = '0') || !(s[k] = '1'); ); break;
		case '-': for (int k = n; s[--k] != '1' && (s[k] = '1') || !(s[k] = '0'); ); break;
		}
	}
	puts(s);
}