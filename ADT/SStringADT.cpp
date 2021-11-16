#include <cstdio>
#define MAXSTRLEN 255
#define OK 1
#define ERROR 0
typedef int Status;
typedef unsigned char SString[MAXSTRLEN + 1];
int next[MAXSTRLEN + 1];
Status StrAssign(SString &T) {
    char ch;
    T[0] = 0;
    while (scanf("%c", &ch) == 1) {
        if (ch == '\n') break;
        T[++T[0]] = ch;
    }
    return OK;
}
Status StrCopy(SString &T, SString S) {
    T[0] = S[0];
    for (int i = 1; i <= S[0]; i++) T[i] = S[i];
    return OK;
}
bool StrEmpty(SString S) {
    return S[0] ? false : true;
}
int StrCompare(SString S, SString T) {
    for (int i = 1; i <= S[0] && i <= T[0]; i++) {
        if (S[i] != T[i]) return S[i] - T[i];
    }
    return S[0]-T[0];
}
int StrLength(SString S) {
    return S[0];
}
Status ClearString(SString &S) {
    S[0] = 0;
    return OK;
}
Status Concat(SString &T, SString S1, SString S2) {
    if (S1[0] + S2[0] <= MAXSTRLEN) {
        for (int i = 1; i <= S1[0]; i++) T[i] = S1[i];
        for (int i = 1; i <= S2[0]; i++) T[S1[0] + i] = S2[i];
        T[0] = S1[0] + S2[0];
        return OK;
    }
    else if (S1[0] < MAXSTRLEN) {
        for (int i = 1; i < S1[0]; i++) T[i] = S1[i];
        for (int i = 1; i <= MAXSTRLEN - S1[0]; i++) T[S1[0] + i] = S2[i];
        T[0] = MAXSTRLEN;
        return ERROR;
    }
    else {
        for (int i = 0; i <= MAXSTRLEN; i++) T[i] = S1[i];
        return ERROR;
    }
}
Status SubString(SString &Sub, SString S, int pos, int len) {
    if (pos < 1 || pos > S[0] || len < 0 || len > S[0] - pos + 1) return ERROR;
    for (int i = 1; i <= len; i++) Sub[i] = S[pos + i - 1];
    Sub[0] = len;
    return OK;
}
int Index(SString S, SString T, int pos) {
    if (pos < 1 || T[0] == 0) return 0;
    int i = pos, j = 1;
    while (i <= S[0] && j <= T[0]) {
        if (S[i] == T[j]) {++i; ++j;}
        else {i = i - j + 2; j = 1;}
    }
    if (j > T[0]) return i - T[0];
    else return 0;
}
void get_nextval(SString T, int nextval[]) {
    int i = 1, j = 0;
    nextval[1] = 0;
    while (i < T[0]) {
        if (j == 0 || T[i] == T[j]) {
            ++i; ++j;
            if (T[i] != T[j]) nextval[i] = j;
            else nextval[i] = nextval[j];
        }
        else j = nextval[j];
    }
}
int Index_KMP(SString S, SString T, int pos) {
    if (pos < 1) return 0;
    int i = pos, j = 1;
    while (i <= S[0] && j <= T[0]) {
        if (j == 0 || S[i] == T[j]) {++i; ++j;}
        else j = next[j];
    }
    if (j > T[0]) return i - T[0];
    else return 0;
}
Status Replace(SString &S, SString T, SString V) {
    return OK;
}
Status StrInsert(SString &S, int pos, SString T) {
    if (pos < 1 || pos > S[0] + 1) return ERROR;
    int i = S[0] + T[0] - MAXSTRLEN > 0 ? MAXSTRLEN - T[0] : S[0];
    for (i; i >= pos; i--) {
        S[T[0] + i] = S[i];
    }
    for (i = 1; i <= T[0]; i++) {
        if (pos + i - 1 >= MAXSTRLEN) break;
        S[pos + i - 1] = T[i];
    }
    S[0] = S[0] + T[0] >= MAXSTRLEN ? MAXSTRLEN : S[0] + T[0];
    return OK;
}
Status StrDelete(SString &S, int pos, int len) {
    if (pos < 1 || pos + len > S[0] + 1 || len < 0) return ERROR;
    for (int i = pos; i <= S[0] - len; i++) {
        if (i + len > S[0]) break;
        S[i] = S[i + len];
    }
    S[0] -= len;
    return OK;
}
Status StrTraverse(SString S) {
    for (int i = 1; i <= S[0]; i++) {
        printf("%c", S[i]);
    }
    if (S[0]) printf("\n");
    printf("%d", S[0]);
    return OK;
}
int main(int argc, char** argv) {
    SString S, T;
    StrAssign(S);
    StrAssign(T);
    int pos, x;
    scanf("%d", &pos);
    x = Index(S, T, pos);
    if (x) {
        printf("%d", x);
    }
    else {
        printf("error");
    }
    return 0;
}