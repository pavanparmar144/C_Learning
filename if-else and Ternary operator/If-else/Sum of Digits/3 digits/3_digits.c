#include<stdio.h>

void main(){
    int num = 123;
    int q,r,q1,r1,sum;

    q = num/10;
    r = num%10;

    q1 = q/10;
    r1 = q%10;

    sum = q1+r1+r;
    printf("\nSum is %d\n", sum);
}