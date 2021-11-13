#include <bits/stdc++.h>
using namespace std;
#define MAXN 100010
int st[MAXN][21];

inline int read() {
	int x=0,f=1;char ch=getchar();
	while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}

inline int Query(int left, int right) {
  int k = log2(right - left + 1);
  return max(st[left][k], st[right - (1 << k) + 1][k]);
}

int main(int argc, char** argv) {
    int n, m, left, right;
    n = read();
    m = read();
    for (int i = 1; i <= n; ++i) {
        st[i][0] = read();
    }
    for (int j = 1; (1 << j) <= n; ++j) {
        for (int i = 1; i + (1 << j) - 1 <= n; ++i) {
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1) )][j - 1]);
        }
    }
    while (m--) {
        left = read();
        right = read();
        printf("%d\n", Query(left, right));
    }
    return 0;
}