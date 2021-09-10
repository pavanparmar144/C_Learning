#include<stdio.h>

int main(){
    int a=10;
    int* ptr = &a;   //Pointer is initialized so no Garbage address


    *ptr = 210;
    printf("\t\t%d\n",*ptr);
    return 0;
}