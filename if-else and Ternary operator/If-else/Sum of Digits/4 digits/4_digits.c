#include<stdio.h>

void main(){
    int num = 3291;
    int q,r,q1,r1,q2,r2,sum;

    q = num/10;
    r = num%10;

    q1 = q/10;
    r1 = q%10;

    q2 = q1/10;
    r2 = q1%10;

    sum = r+r1+r2+q2;
    printf("\nSum is %d\n",sum);
}