#include<stdio.h>
void main(){
    int arr[5],i;
    int *ptr;

    printf("\nEnter the array values...\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array values are...\n");
    for(i=0;i<5;i++){
        printf("\t%d",arr[i]);
    }
    
    ptr = arr;
    printf("\nusing ptr[i]................................\n");
    for(i=0;i<5;i++){
        printf("\nValues ptr[i]==>%d",ptr[i]);
    }
    printf("\nusing arr[i]................................\n");
    for(i=0;i<5;i++){
        printf("\nValues arr[i]==>%d",arr[i]);
    }
    printf("\nusing *(ptr+i)................................\n");
    for(i=0;i<5;i++){
        printf("\nValues *(ptr+i)==>%d",*(ptr+i));
    }
    printf("\nusing *(arr+i)................................\n");
    for(i=0;i<5;i++){
        printf("\nValues *(arr+i)==>%d",*(arr+i));
    }
    printf("\nusing i[ptr]................................\n");
    for(i=0;i<5;i++){
        printf("\nValues i[ptr]==>%d",i[ptr]);
    }
}