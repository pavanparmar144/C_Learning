#include<stdio.h>

int main(){
    int a = 10;
    int* b ;

    printf("1....value in b: %d\n",*b); 
    b = &a;
    printf("2....value in b: %d\n",*b);  //*b... works as RHS....

    return 0;
}