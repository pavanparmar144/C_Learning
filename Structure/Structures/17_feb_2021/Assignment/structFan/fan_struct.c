#include<stdio.h>
#include<string.h>

typedef struct Fan{
    int fanId;
    char fanName[30];
    int rpm;
}fan;

void store(fan*);
void display(fan*);

void main(){
    fan f1;
    store(&f1);
    display(&f1);
}

void store(fan* ptr1){
    printf("Enter the details for Fan\n");
    printf("Enter the id of Fan:\n");
    scanf("%d",&ptr1->fanId);
    printf("Enter the company name of Fan:\n");
    scanf("%s",ptr1->fanName);
    printf("Enter the id of Fan:\n");
    scanf("%d",&ptr1->rpm);    
}

void display(fan* ptr2){
    printf("Entered details are:\n");
    printf(" Fan Id: %d\n Fan Company Name: %s\n Fan RPM: %d\n",ptr2->fanId,ptr2->fanName,ptr2->rpm);
}