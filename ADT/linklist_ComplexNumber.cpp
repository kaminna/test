#include <cstdio>
#include <cstdlib>
#define OK 1
#define ERROR 0
typedef int status;
typedef int elemtype;
typedef struct lnode {
    elemtype data;
    lnode* next;
}lnode, *complex;
status create(complex &C, elemtype x, elemtype y) {
    C=(lnode*)malloc(sizeof(lnode));
    if(!C) return ERROR;
    C->next=(lnode*)malloc(sizeof(lnode));
    C->next->next=NULL;
    if(!C->next) return ERROR;
    C->data=x;
    C->next->data=y;
    return OK;
}
status add(complex C1, complex C2, complex &sum) {
    create(sum,0,0);
    sum->data=C1->data+C2->data;
    sum->next->data=C1->next->data+C2->next->data;
    return OK;
}
status sub(complex C1, complex C2, complex &dif) {
    create(dif,0,0);
    dif->data=C1->data-C2->data;
    dif->next->data=C1->next->data-C2->next->data;
    return OK;
}
status printcomplex(complex C) {
    printf("%d %d\n", C->data, C->next->data);
    return OK;
}
status destroy(complex C) {
    if(C->next) return ERROR;
    free(C->next);
    if(C) return ERROR;
    free(C);
    return OK;
}
int main(int argc, char** argv) {
     complex fs1,fs2,fs3,sum,dif;       
     elemtype x,y;

     scanf("%d%d",&x,&y);
     create(fs1,x,y);

     scanf("%d%d",&x,&y);
     create(fs2,x,y);

     scanf("%d%d",&x,&y);
     create(fs3,x,y);

     if (add(fs1,fs2,sum)&&sub(sum,fs3,dif))
        printcomplex(dif);

    destroy(fs1);
    destroy(fs2);
    destroy(fs3);
    destroy(sum);
    destroy(dif);
    
    return 0;
}