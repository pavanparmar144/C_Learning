#include<stdio.h>

void sumOfDigits(int,int*);
void reverseOfDigits(int, int*);

void main(){
    int num=0;
    int *sum=0,*rev=0;

    printf("\nEnter the no.s\n");
    scanf("%d",&num);

    sumOfDigits(num,sum);
    reverseOfDigits(num,rev);

    printf("The sum of the digits is:%d",*sum);
    printf("The reverse of the digit is:%d",*rev);
}

void sumOfDigits(int n,int*s){
    int r;
    for(;n>0;n=n/10){
        r=n%10;
        *s=*s+r;
    }
    printf("inside sumOfDigits... %d",*s);
}

void reverseOfDigits(int n, int*rev){
    int r;
    while(n!=0){
        r=n%10;
        *rev=(*rev*10)+r;
        n=n/10;
    }
    printf("inside reverseOfDigits... %d",n);
}




