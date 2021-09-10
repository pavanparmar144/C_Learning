#include<stdio.h>
#include<string.h>

struct Date{
    int day;
    int month;
    int year;
};

void main(){
    struct Date d1;

    printf("\nEnter the below values....\n");
    printf("\nEnter date: ");
    scanf("%d",&d1.day);

    printf("\nEnter month: ");
    scanf("%d",&d1.month);

    printf("\nEnter year: ");
    scanf("%d",&d1.year);

    printf("\nToday's date is: %d/%d/%d\n",d1.day,d1.month,d1.year);
}