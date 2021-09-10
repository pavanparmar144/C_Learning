#include<stdio.h>

void main(){
    int num;

    printf("\nEnter the number: \n");
    scanf("%d",&num);

    (num%2==0)?printf("num %d is even\n",num):printf("num %d is odd\n",num);
}