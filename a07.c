#include"a07.h"
void solve(double *a, int m, int n){
    double s=a[n];
    int i,j;
    double *pi;
    for(i=1;i<m-1;i++){
        pi=a+i*n;
        for(j=1;j<n-1;j++){
            s=(*(pi-n+j)+(*(pi+n+j))+s+(*(pi+j+1)))/5;
            pi[j]=s;
        }
        s=a[(i+1)*n];
    }

}
