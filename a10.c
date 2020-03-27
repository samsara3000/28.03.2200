#include"a10.h"
void solve(double *a, int m, int n){
    double *pi;
    int i,j;
    double s=a[(m-2)*n];
    for(i=m-2;i>0;i--){
        pi=a+i*n;
        for(j=1;j<n-1;j++){
            s=(*(pi+j+1)+s+(*(pi+j+n))+(*(pi+j-n)))/5;
            pi[j]=s;
        }
        s=*(pi-n);
    }

}
