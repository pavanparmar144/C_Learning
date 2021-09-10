#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[20];
};

void main(){
    struct Student s1;

    s1.roll = 1997;
    strcpy(s1.name,"Pavan");

    printf("\nRoll no.: %d\n",s1.roll);
    printf("\nname of student.: %s\n",s1.name);
}