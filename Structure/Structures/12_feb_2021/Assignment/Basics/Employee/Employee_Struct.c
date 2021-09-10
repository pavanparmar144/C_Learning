#include<stdio.h>
#include<string.h>

struct Employee{
    int empId;
    char name[20];
    double salary;
};

void main(){
    struct Employee e1;

    e1.empId = 1;
    strcpy(e1.name, "Pavan");
    e1.salary = 40000;

    printf("\nEmployee Id: %d",e1.empId);
    printf("\nEmployee Name: %s",e1.name);
    printf("\nEmployee Salary: %lf\n",e1.salary);
}