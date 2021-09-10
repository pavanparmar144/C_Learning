#include<stdio.h>

int main(){
    int a = 10;
    int* b;

    b = &a;
    printf("value of a is :%d\n",b);    // address of a will be stored in b.

    *b = 20;    //(LHS) Value at address in b which is 2000 is "20";

    printf("value of a is :%d\n",a);    // 
}