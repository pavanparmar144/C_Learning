#include<stdio.h>

void main(){
    int a=10;
    int b=0;

    int* ptr=&a;    //address of a in ptr;
    int* p=&b;      //address of b in p;

    *ptr = *p;  //value at address(&a) in ptr will be replaced with the 
                // value at address(&b) in p

    printf("\t\t %d \n",*ptr);  // after process a=0
}