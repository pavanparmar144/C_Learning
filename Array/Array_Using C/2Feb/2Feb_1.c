//Min, Max, Sum, Find, Store, Display the array.

#include<stdio.h>

//Function Declarations
void store(int*,int);
void display(int*,int);
int maxA(int*,int);
int minA(int*,int);
int sumA(int[],int);    //array also declared as shown for understanding that it is an array
int findNum(int*,int,int);


void main(){

    int arr[5] = {10,20};
    int max,min,sum,f,number;
    printf("\nEnter the Array elements:\n");
    store(arr,5);

    printf("\nThe array Elements are:\n");
    display(arr,5);

    max = maxA(arr,5);
    printf("\n\n%d is max number from the array.\n", max);

    min = minA(arr,5);
    printf("\n%d is min number from the array.\n",min);

    sum = sumA(arr,5);
    printf("\n%d is sum of the array numbers.\n",sum);

    printf("\nEnter the  number you want to find in Array: \n");
    scanf("%d",&number);    
    f = findNum(arr,5,number);
    if(f==1){
        printf("\n%d is found in array...\n",number);
    }else{
        printf("\n%d is not available in array...\n",number);
    }
}


void store(int* ptr, int size){
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&ptr[i]);
    }
}

void display(int*ptr,int size){
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",ptr[i]);
    }
}

int maxA(int* ptr,int size){
    int max = ptr[0];
    int i ;
    for(i=1;i<size;i++){
        if(max<ptr[i]){
            max = ptr[i];
        }
    }
    return max;
}

int minA(int* ptr, int size){
    int min = ptr[0];
    int i;
    for(i=0;i<size;i++){
        if(min>ptr[i]){
            min = ptr[i];
        }
    }
    return min;
}

int sumA(int* ptr, int size){
    int s =0,i;
    for(i=0;i<size;i++){
        s = s + ptr[i];
    }
    return s;
}

int findNum(int* ptr, int size, int num){
    int i=0, flag=0;
    for(i=0;i<size;i++){
        if(num == ptr[i]){
            flag = 1;
            break;
        }
    }
    return flag;
}
