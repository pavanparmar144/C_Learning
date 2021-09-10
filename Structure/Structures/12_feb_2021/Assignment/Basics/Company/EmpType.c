#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[30];
    double salary;    
};

struct SalesManger{
    float incentive;
    int target;

    struct Employee e;
};

struct Admin{
    double allowance;
    struct Employee e;
};

struct HR{
    float commission;
    struct Employee e;
};

void main(){
    struct SalesManger sm;
    struct Admin ad;
    struct HR hr;

    printf("\nEnter the details for SalesManager:\n");
    scanf("%d %s %lf %f %d ",&sm.e.id,sm.e.name,&sm.e.salary,&sm.incentive, &sm.target);

    printf("\nSalesManager.....\n");
    printf("Id: %d\n",sm.e.id);
    printf("Id: %s\n",sm.e.name);
    printf("Id: %lf\n",sm.e.salary);
    printf("Id: %f\n",sm.incentive);
    printf("Id: %d\n",sm.target);

    printf("***************************************************************************************");


    printf("\nEnter the details for Admin:\n");
    scanf("%d %s %lf %lf ",&ad.e.id,ad.e.name,&ad.e.salary,&ad.allowance);

    printf("\nAdmin.....\n");
    printf("Id: %d\n",ad.e.id);
    printf("Id: %s\n",ad.e.name);
    printf("Id: %lf\n",ad.e.salary);
    printf("Id: %lf\n",ad.allowance);

    printf("***************************************************************************************");


    printf("\nEnter the details for HR:\n");
    scanf("%d %s %lf %f",&hr.e.id,hr.e.name,&hr.e.salary,&hr.commission);

    printf("\nSalesManager.....\n");
    printf("Id: %d\n",sm.e.id);
    printf("Id: %s\n",sm.e.name);
    printf("Id: %lf\n",sm.e.salary);
    printf("Id: %f\n",hr.commission);

    printf("***************************************************************************************");
}


