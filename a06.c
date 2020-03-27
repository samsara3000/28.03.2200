#include"a06.h"
double solve(double *a, double *b, int m, int n){
    int i;
    int j;
    int l;
    double s=0;
    double *pi;
    double *pj;
    double res=0;
    double max=-1;
    for(l=0;l<m;l++){
        pi=b+l;
        for(i=0;i<m;i++){
           pj=a+i*n;
           if(i==l){
               s=-1;
           }
           for(j=0;j<n;j++){
             s+=pj[j]*pi[j*m];

           }
           res+=fabs(s);
           s=0;
       }
        if(max<res){
            max=res;
        }
        res=0;
    }
    return max;
}
