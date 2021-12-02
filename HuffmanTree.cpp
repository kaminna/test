#include <cstdio>
#include <cstdlib>
#include <climits>
#define OK 1
#define ERROR 0
typedef int Status;
typedef struct {
    int weight;
    int parent, lch, rch;
}HTNode, *HuffmanTree;
Status Select(HuffmanTree HT, int pos, int &s1, int &s2) {
    int minw1 = INT_MAX, minw2 = INT_MAX, tmp;
    for (int i = 1; i <= pos; i++) {
        if(!HT[i].parent) {
            tmp = HT[i].weight;
            if (minw1 > tmp) {
                minw2 = minw1;
                s2 = s1;
                minw1 = tmp;
                s1 = i;
            }
            else if (minw2 > tmp) {
                minw2 = tmp;
                s2 = i;
            }
        }
    }
    return OK;
}
void CreateHuffmanTree(HuffmanTree &HT, int n) {
    if (n < 2) return;
    int s1, s2;
    for (int i = n + 1; i <= 2 * n - 1; i++) {
        Select(HT, i-1, s1, s2);
        HT[s1].parent = i; HT[s2].parent = i;
        HT[i].lch = s1; HT[i].rch = s2;
        HT[i].weight = HT[s1].weight + HT[s2].weight;
    }
    return;
}
void OutputHuffmanTree(HuffmanTree &HT, int n) {
    if(!HT) return ;
    for(int i = 1; i <= n * 2 - 1; i++){
        printf("%d:weight=%d parent=%d lchild=%d rchild=%d\n", i , HT[i].weight, HT[i].parent, HT[i].lch, HT[i].rch);
    }
    return ;
}
int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);
    HuffmanTree HT = (HuffmanTree)malloc((2 * n) * sizeof(HTNode));
    for (int i = 1; i <= n; i++) {
        scanf("%d", &HT[i].weight);
        HT[i].parent = HT[i].rch = HT[i].lch = 0;
    }
    CreateHuffmanTree(HT, n);
    OutputHuffmanTree(HT, n);
    free(HT);
    return 0;
}