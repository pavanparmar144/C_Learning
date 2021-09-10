#include<stdio.h>

void priceOfItem(double*,double*);

void main(){
    double price;
    double discount;

    printf("\nEnter the price...\n");
    scanf("%lf",&price);

    printf("\nEnter the discount...\n");
    scanf("%lf",&discount);

    priceOfItem(&price, &discount);

    printf("\nPrice of item...:%lf\n",price);

}

void priceOfItem(double* p, double* d){
    *p = (*p)-(*p * (*d/100));

}