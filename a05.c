#include"a05.h"
#include<math.h>
double solve(double *a, double *b, int m, int n){
        int i;
        int j;
        int l;
        double s=0;
        double *pi;
        double *pj;
        double res=0;
        double max=-1;
        for(i=0;i<m;i++){
            pi=a+i*n;
            for(l=0;l<m;l++){
                pj=b+l;
             for(j=0;j<n;j++){
               s+=pi[j]*pj[m*j];
             }
              if(i==l){
                s-=1;
              }
              s=fabs(s);
              res+=s;
              s=0;
            }
            if(res>max){
                max=res;
            }
                res=0;

        }
        return max;
    }
