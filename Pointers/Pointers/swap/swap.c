#include<stdio.h>

void swap(int*, int*);

void main(){
    int a=10, b=20;

    printf("Before swapping...\n");
    printf("\t\ta = %d\n",a);
    printf("\t\tb = %d\n",b);

    swap(&a, &b);
    printf("After Swapping...\n");
    printf("\t\ta = %d\n",a);
    printf("\t\tb = %d\n",b);
}

void swap(int* a, int*b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}