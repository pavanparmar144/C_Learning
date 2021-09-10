#include<stdio.h>

void main(){
    int num=0,n,max=0,min=0,sum=0,i=0,j=0,arr[n];

    printf("\nPlease enter the size of array you want...\n");
    scanf("%d",&n);
    printf("\nSize of array entered is: %d\n",n);
 
    printf("\nEnter the values you want in array...\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nValues in array are:\n");
    for(i=0;i<n;i++){
        printf("\t %d",arr[i]);
    }
    printf("\n");

    //for finding max....
    max = arr[0];
    for(i=0;i<n;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    printf("\nMaximum value from array is: %d\n",max);

    //for finding min....
    min = arr[0];
    for(i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("\nMinimum value from array is: %d\n",min);

    //Sum of the array values....
    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("\n The sum ofthe array elements is: %d\n",sum);
}