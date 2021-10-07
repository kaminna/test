#include <cstdio>
#include <cstdlib>
#define OK 1
#define ERROR 0
typedef int status;
typedef int elemtype;
typedef elemtype* complex;
status create(complex &C, elemtype x, elemtype y) {
    C=(elemtype*)malloc(2*sizeof(elemtype));
    if(!C) return ERROR;
    C[0]=x;C[1]=y;
    return OK;
}
status add(complex C1, complex C2, complex &sum) {
    sum=(elemtype*)malloc(2*sizeof(elemtype));
    if(!sum) return ERROR;
    sum[0]=C1[0]+C2[0];
    sum[1]=C1[1]+C2[1];
    return OK;
}
status sub(complex C1, complex C2, complex &dif) {
    dif=(elemtype*)malloc(2*sizeof(elemtype));
    if(!dif) return ERROR;
    dif[0]=C1[0]-C2[0];
    dif[1]=C1[1]-C2[1];
    return OK;
}
status printcomplex(complex C) {
    printf("%d %d\n", C[0], C[1]);
    return OK;
}
status destroy(complex C) {
    free(C);
    return OK;
}
int main(int argc, char** argv) {
     complex fs1,fs2,fs3,sum,dif;       
     elemtype x,y;

     //printf("please input the first complex real, imag:");
     scanf("%d%d",&x,&y);
     create(fs1,x,y);

     //printf("please input the seconds complex real, imag :");
     scanf("%d%d",&x,&y);
     create(fs2,x,y);

     //printf("please input the third complex real, imag :");
     scanf("%d%d",&x,&y);
     create(fs3,x,y);

     if (add(fs1,fs2,sum)&&sub(sum,fs3,dif))
        printcomplex(dif);
     //else 
        //printf(" error");

    destroy(fs1);
    destroy(fs2);
    destroy(fs3);
    destroy(sum);
    destroy(dif);
    
    return 0;
}