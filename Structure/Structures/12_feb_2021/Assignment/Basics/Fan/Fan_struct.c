#include<stdio.h>
#include<string.h>

struct Fan{
    int id;
    char companyName[20];
    int rpm;
};

void main(){
    struct Fan f;

    f.id = 10;
    strcpy(f.companyName,"Bajaj");
    f.rpm = 2000;

    printf("\nFan id: %d\n",f.id);
    printf("\nFan Company name: %s\n",f.companyName);
    printf("\nFan RPM: %d\n",f.rpm);
    


}
