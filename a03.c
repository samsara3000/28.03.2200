#include"a03.h"
#include<math.h>
double  solve(double *a, int m, int n, double *x, double *b){
    double *pi;
    double s=0;
    int i;
    int j;
    double res=0;
    for(i=0;i<m;i++){
        pi=a+i*n;
        for(j=0;j<n;j++){
           s+=pi[j]*x[j];
        }
        s-=b[i];
        res+=fabs(s);
        s=0;
    }
    return res;
}
