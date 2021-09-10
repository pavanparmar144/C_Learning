#include<stdio.h>

void main(){
    float percentage;

    printf("Please enter your percentage: \n");
    scanf("%f",&percentage);
    printf("percentage you entered is : %f\n",percentage);
    
    if(percentage>75){
        printf("First class with Distinction\n");
    }
    else{
        if(percentage<75 && percentage>=66){
            printf("First Class\n");
        }
        else{
            if(percentage<=65 && percentage>=55){
                printf("Higher Second Class\n");
            }
            else{
                if(percentage<55 && percentage>=45){
                    printf("Second class\n");
                }
                else{
                    if(percentage<=44 && percentage>35){
                        printf("Pass class\n");
                    }
                    else{
                        printf("You are Failed...\n");
                    }
                }
            }
        }
    }
}