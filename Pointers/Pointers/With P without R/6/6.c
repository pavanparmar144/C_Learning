#include<stdio.h>

void greatestNum(int*,int*,int*,int*);

void main(){
    int num1,num2,num3,g;
    printf("\nEnter the 3 no.s\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    greatestNum(&num1,&num2,&num3,&g);
    printf("\nGreatest number is: %d\n",g);
}

void greatestNum(int*n1, int*n2, int*n3, int*g){
    *g = *n1>*n2?(*n1>*n3?*n1:*n3):(*n2>*n3?*n2:*n3);
}