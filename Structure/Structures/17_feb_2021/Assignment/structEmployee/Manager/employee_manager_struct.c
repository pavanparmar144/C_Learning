#include<stdio.h>
#include<string.h>

//macro
#define pf printf
#define sf scanf

typedef struct Manager{
    int empId;
    char empName[30];
    double salary;
    double incentive;
    int target;
}manager;


void store(manager*);
void display(manager*);

void main(){
    manager m1;

    store(&m1);
    display(&m1);
}

void store(manager* ptr1){
    pf("Enter the details:\n");
    pf("Id:\n");
    sf("%d",&ptr1->empId);

    pf("Name:\n");
    sf("%s",ptr1->empName);

    pf("Salary:\n");
    sf("%lf",&ptr1->salary);

    pf("Incentive:\n");
    sf("%lf",&ptr1->incentive);

    pf("Target:\n");
    sf("%d",&ptr1->target);
}

void display(manager* ptr2){
    pf("Entered details are:\n");
    pf("Id: %d\n",ptr2->empId);
    pf("Name: %s\n",ptr2->empName);
    pf("Salary: %lf\n",ptr2->salary);
    pf("Incentive: %lf\n",ptr2->incentive);
    pf("Target: %d\n",ptr2->target);
}