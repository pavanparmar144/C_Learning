#include<stdio.h>
#include<string.h>

//macro
#define pf printf
#define sf scanf


typedef struct HR
{
    int empId;
    char empName[30];
    double salary;
    int commission;
}hr;


void store(hr*);
void display(hr*);

void main(){
    hr hr1;

    store(&hr1);
    display(&hr1);
}

void store(hr* ptr1){
    pf("Enter the details:\n");
    pf("Id:\n");
    sf("%d",&ptr1->empId);

    pf("Name:\n");
    sf("%s",ptr1->empName);

    pf("Salary:\n");
    sf("%lf",&ptr1->salary);

    pf("Commission:\n");
    sf("%d",&ptr1->commission);

}

void display(hr* ptr2){
    pf("Entered details are:\n");
    pf("Id: %d\n",ptr2->empId);
    pf("Name: %s\n",ptr2->empName);
    pf("Salary: %lf\n",ptr2->salary);
    pf("Allowance: %d\n",ptr2->commission);
}