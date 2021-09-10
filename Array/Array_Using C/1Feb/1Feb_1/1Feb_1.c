//Min,Max,Sum ann=0, 
 #include<stdio.h>
 void main(){  
   
   
    int i, arr[5], max=arr[0] , min=arr[0] , sum = 0, number, flag =0;
    int* ptr;

    printf("\nEnter the elements in array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    } 

    ptr=arr;   //pointer pointing to base address of array

    printf("\nThe elements in array are:\n");
    for(i=0;i<5;i++){
        printf("\t%d",ptr[i]);
    }
    printf("\n");
    
    //for max
    //max=ptr[0];
    for(i=0;i<5;i++){
        if(max<ptr[i])
            max=ptr[i];
    }

    //for min
    min=arr[0];
    for(i=0;i<5;i++){
        if(min>ptr[i])
            min=ptr[i];
    }

    //for sum
    for(i=0;i<5;i++){
        sum = sum+ptr[i];
    }

    printf("\nMax value = %d\n",max);
    printf("\nMin value = %d\n",min);
    printf("\nSum is = %d\n",sum);

    printf("\nEnter the number you want to find:\n");
    scanf("%d",&number);

    //Find operation
    for(i=0;i<5;i++){
        if(number == ptr[i]){
            flag=1;
            break;
        }
        else
            flag = 0;
    }

    if(flag ==1){
        printf("\nFound\n");
    }else{
        printf("\nNot Found\n");
    }
}