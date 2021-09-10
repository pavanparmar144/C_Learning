#include<stdio.h>
#include<string.h>

typedef struct Student{
    int roll;
    char name[30];
    double marks;
}student;

void store(student*);
void display(student*);

void main(){
    student s1;
    student* ptr;

    ptr = &s1;

    store(&s1);
    display(&s1);
}

void store(student *ptr){
    printf("Enter the details:\n");
    printf("Enter the roll no.\n");
    scanf("%d",&ptr->roll);
    printf("Enter the name:\n");
    scanf("%s",ptr->name);
    printf("Enter the marks:\n");
    scanf("%lf",&ptr->marks);
}

void display(student *ptr){
    printf("Entered details are:\n");
    printf("Roll no.: %d\t",ptr->roll);
    printf("Name: %s\t",ptr->name);
    printf("Marks: %lf\n",ptr->marks);
}