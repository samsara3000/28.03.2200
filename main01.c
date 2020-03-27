#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"matrix.h"
#include"a01.h"
int main(int argc, char *argv[]){
    int n;
    int m;
    int ret;
    double res;
    double *a;
    double t;
    char *name=0;
    if((argc==3)||(argc==4)){
        switch (argc) {
        case 4:
            if(((sscanf(argv[1],"%d", &m))==1)&&(sscanf(argv[2],"%d", &n)==1)){
                name=argv[3];

            }
            else{
                fprintf(stderr,"Usage: %s [m] [n] [file1] \n", argv[0]);
                return 2;
            }
            break;
        case 3:
            if(((sscanf(argv[1],"%d", &m))==1)&&(sscanf(argv[2],"%d", &n)==1)){
               name=0;
            }
            else{
                fprintf(stderr, "Usage: %s [m] [n]\n", argv[0]);
                return 2;
            }
            break;
        }
    }
    else{
        fprintf(stderr, "Usage: %s [m] [n]\n", argv[0]);
        return 2;
    }
        if(!(a=(double*)malloc(m*n*sizeof(double)))){
        printf("Not enough memory!\n");
        return 2;
    }
    if(name){
        ret=readMatrix(a,m,n,name);
        if(ret!=SUCCESS){
            switch (ret) {
            case ERROR_OPEN:
                printf("Can't open %s\n",name);
                break;


          case ERROR_READ:
                printf("Can't read %s\n",name);
                break;
            default:
                printf("Unknown error\n");
                break;
            }
            free(a);
            return 3;
        }
    }
    else initMatrix(a,m,n);
    printMatrix(a,m,n);
    printf("\n");
    t=clock();
    res=solve(a,m,n);
    t=clock()-t;
    printf("Max summ of string: %lf\n",res);
    printf("Ellapsed=%.2lf\n",t/CLOCKS_PER_SEC);
    free(a);
    return 0;
}
