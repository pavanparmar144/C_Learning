#include<stdio.h>

int main(){
    int* ptr;   //pointer is only declared not initialized..
                //it is Wild Pointer. It is having Garbage address

    int a=10;

    *ptr = 210;
    printf("%d",*ptr);  //Accidentral case output among 3 cases.
    return 0;
}