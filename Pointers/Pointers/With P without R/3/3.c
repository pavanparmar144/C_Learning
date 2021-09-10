#include<stdio.h>

void evenOdd(int *);

void main(){
    int num = 5;

    evenOdd(&num);
}

void evenOdd(int *n){
    if(*n%2==0){
        printf("no. is even.... %d",*n);
    }
    else{
        printf("No. is Odd... %d",*n);
    }
}