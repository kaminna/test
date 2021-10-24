#include <bits/stdc++.h>
using namespace std;
int n, nums[10];
void dfs(int sum, int depth, int s){
    if (sum == n && depth != 1){
        for (int i = 0; i < depth; i++) {
            if (i != depth-1) printf("%d+", nums[i]);
            else printf("%d", nums[i]);
        }
        printf("\n");
        return;
    } 
    for (int i = s; i <= 9; i++) {
        if (sum+i > n) break;
        nums[depth] = i;
        dfs(sum+i, depth+1, i);
        nums[depth] = 0;
    }
    return;
}
int main(int argc, char** argv) {
    scanf("%d", &n);
    dfs(0, 0, 1);
    return 0;
}