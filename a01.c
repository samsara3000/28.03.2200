#include"a01.h"
#include<math.h>
/*Написать функцию, получающую в качестве аргументов m × n массив a вещественных чисел и целые
P
числа m, n, и возвращающую max i=1,...,m nj=1 |a ij |. Основная программа должна вводить числа m, n
и массив a (из файла или по заданной формуле), вызывать эту функцию и выводить на экран результат
ее работы.*/
double solve(double *a, int m, int n){
    int i;
    int j;
    double *pi;
    double max=0;
    double s=0;
    for(j=0;j<n;j++){
        max+=a[j];
    }
    for(i=1;i<m;i++){
        pi=a+i*n;
        for(j=0;j<n;j++){
            s+=pi[j];
        }
        s=fabs(s);
        if(s>max){
            max=s;
        }
        s=0;
    }
    return max;
}
