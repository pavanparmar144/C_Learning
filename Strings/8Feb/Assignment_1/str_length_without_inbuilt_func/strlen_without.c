//Strlen without using string functions

#include<stdio.h>
#include<string.h>

void main(){
    //int size = 7;
    char arr[7] = {'\0'};
    int i, count;

    // printf("\nEnter the no. of characters you want in the array....\n");
    // scanf("%d",&size);

    for(i=0;i<7;i++){
        scanf("%c",&arr[i]);
    }//for storring the array...

    for(i=0;i<7;i++){
        printf("%c\t",arr[i]);
    }//for printing the array...
    
    count = i;
    printf("\nthe length of the array is: %d\n",count);
}