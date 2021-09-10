#include<stdio.h>


void main(){
    int num = 79;
    int q,r,sum;

    q=num / 10;
    r=num % 10;

    sum = q+r;
    printf("\nSum is %d \n",sum);
}