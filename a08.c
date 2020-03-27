#include"a08.h"
void solve(double *a, int m, int n){
    double *pi;
    int i,j;
    double s=a[n*(m-2)+n-1];
    for(i=m-2;i>0;i--){
        pi=a+i*n;
        for(j=n-2;j>0;j--){
            s=(*(pi+j-1)+s+(*(pi+j+n))+(*(pi+j-n)))/5;
            pi[j]=s;
        }
        s=*(pi-1);
    }

}
