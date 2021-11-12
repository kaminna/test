#include <bits/stdc++.h>
using namespace std;
list<int> l;
list<int>::iterator iter[100010];
bool erased[100010];
int main(int argc, char** argv) {
    int n, k, p;
    scanf("%d", &n);
    l.push_front(1);
    iter[1] = l.begin();
    for (int i = 2; i <= n; i++) {
        scanf("%d%d", &k, &p);
        if (p) {
            auto nextiter = next(iter[k]);
            iter[i] = l.insert(nextiter, i);
        }
        else {
            iter[i] = l.insert(iter[k], i);
        }
    }
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &k);
        if (!erased[k]) l.erase(iter[k]);
        erased[k] = true;
    }
    for (auto i: l) {
        cout << i << ' ';
    }
    return 0;
}