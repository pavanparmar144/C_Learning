#include<stdio.h>

void main(){
    int m;
    printf("\nEnter the percentage:\n");
    scanf("%d",&m);
    
    (m>=75)?printf("\nDistinction\n"):(m<75 && m>=66)?printf("First Class\n"):
    (m<=65 && m>=56)?printf("Higher Second Class\n"):
    (m<=55 && m>=46)?printf("Second Class\n"):
    (m<=45 && m>=35)?printf("Pass class\n"):printf("Failed\n");
}