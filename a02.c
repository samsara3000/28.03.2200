#include"a02.h"
#include<math.h>
/*Написать функцию, получающую в качестве аргументов m × n массив a вещественных чисел и целые
P
числа m, n, и возвращающую max j=1,...,n m
i=1 |a ij |. Основная программа должна вводить числа m, n и
массив a (из файла или по заданной формуле), вызывать эту функцию и выводить на экран результат ее
работы.*/
double solve(double *a, int m, int n){
    int i,j;
    double *pj;
    double max=0,s=0;
    for(i=0;i<m;i++){
        max+=a[i*n];
    }
    for(j=0;j<n;j++){
        pj=a+j;
        for(i=0;i<m;i++){
            s+=pj[i*n];
        }
        s=fabs(s);
        if(s>max){
            max=s;
        }
        s=0;
    }
    return max;
}
