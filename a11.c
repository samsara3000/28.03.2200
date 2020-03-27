#include"a11.h"
void solve(double *a, int m, int n){
    int si=0;
    int sj=0;
    int i,j;
    double *pi;
    double temp;
    double max=fabs(a[0]);
    for(i=0;i<m;i++){
        pi=a+i*n;
        for(j=0;j<n;j++){
            if(fabs(pi[j])>max){
                max=fabs(pi[j]);
                si=i;
                sj=j;
            }
        }
    }
    pi=a+si*n;
    for(i=0;i<n;i++){
        temp=a[i];
        a[i]=pi[i];
        pi[i]=temp;
    }
    pi=a+sj;
    for(i=0;i<m;i++){
        temp=pi[i*n];
        pi[i*n]=a[i*n];
        a[i*n]=temp;
       }
}
