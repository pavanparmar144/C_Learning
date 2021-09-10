#include<stdio.h>


int main(){
    int a=0;
    int* b;

    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("value of a is: %d\n",a);
    
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("value of b is: %d\n",b);


    a = *b;
    printf("value of a is: %d\n",a);

    return 0;

}