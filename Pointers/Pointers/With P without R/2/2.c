#include<stdio.h>
#include<math.h>

void areaOfRect(int,int,int*);
void periOfRect(int,int,int*);
void areaOfCircle(int,float*);

void main(){
    int l,b;
    float r;
    int a,p;
    float c=0;

    printf("\n Enter length and breadth for rectangle\n");
    scanf("%d %d",&l,&b);

    printf("\nEnter the radiud for finding area of circle\n");
    scanf("%f",&r);

    areaOfRect(l,b,&a);
    periOfRect(l,b,&p);
    areaOfCircle(r,&c);

    printf("\n Area of rect: %d\n",a);
    printf("\n Perimeter of rect: %d\n",p);
    printf("\n Area of circle: %0.2f\n",c);
}

void areaOfRect(int x, int y, int* area){
    *area = x*y;
}

void periOfRect(int x, int y, int* peri){
    *peri = 2*(x+y);
}

void areaOfCircle(int z, float* areac){
    float pi = 3.142;
    *areac = 3.142*z*z;
}
