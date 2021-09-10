#include<stdio.h>

void myfun(int*);

void main(){
    int a=10;
    
    printf("\t\t a = %d\n",a);  //before function call
    myfun(&a);
    printf("\t\t a = %d\n",a);  //after function call

}

void myfun(int* p){
    *p = 300;
}