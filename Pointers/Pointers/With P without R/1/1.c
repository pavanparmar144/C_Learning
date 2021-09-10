#include<stdio.h>

void temp(double, double*);

void main(){
    double c;
    double f;

    printf("Enter the temp in c: \n");
    scanf("%lf",&c);

    temp(c,&f);

    printf("\n Temp in F is %0.2lf: \n",f);
}

void temp(double cel, double* fah){
    *fah = (cel*(5/9))+32;
}