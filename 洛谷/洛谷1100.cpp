#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    unsigned int n;
    scanf("%u", &n);
    printf("%u\n", (n<<16)+(n>>16));
}