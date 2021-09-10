#include<stdio.h>
#include<string.h>

//macro
#define pf printf
#define sf scanf


typedef struct Admin{
    int empId;
    char empName[30];
    double salary;
    int allowance;
}admin;


void store(admin*);
void display(admin*);

void main(){
    admin a1;

    store(&a1);
    display(&a1);
}

void store(admin* ptr1){
    pf("Enter the details:\n");
    pf("Id:\n");
    sf("%d",&ptr1->empId);

    pf("Name:\n");
    sf("%s",ptr1->empName);

    pf("Salary:\n");
    sf("%lf",&ptr1->salary);

    pf("Allowance:\n");
    sf("%d",&ptr1->allowance);

}

void display(admin* ptr2){
    pf("Entered details are:\n");
    pf("Id: %d\n",ptr2->empId);
    pf("Name: %s\n",ptr2->empName);
    pf("Salary: %lf\n",ptr2->salary);
    pf("Allowance: %d\n",ptr2->allowance);
}