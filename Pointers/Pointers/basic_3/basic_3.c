#include<stdio.h>

int main(){
    int a =0;
    int b = 20;

    int* ptr;

    ptr = &b;   //address of b will be stored in ptr.
    printf("1....value of a: %d\n",a); //value of a is 0.

    a = *ptr;   //(RHS)...2 steps
                //1. address in prt will be fetched first which is address of b.
                //2. value of the fetched address will be assigned to a which is 20.

    printf("2....value in a=%d\n",a);  //20

    return 0;
}