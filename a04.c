#include"a04.h"
double solve(double *a, int m, int n, double *x, double *b){
    double *pi;
    double s=0;
    double max=0;
    int i=0;
    int j;
    pi=a+i*n;
    for(j=0;j<n;j++){
       max+=pi[j]*x[j];
    }
    max-=b[i];
    for(i=1;i<m;i++){
        pi=a+i*n;
        for(j=0;j<n;j++){
           s+=pi[j]*x[j];
        }
        s-=b[i];
        s=fabs(s);
        if(max<s){
            max=s;
        }
        s=0;
    }
    return max;
}
