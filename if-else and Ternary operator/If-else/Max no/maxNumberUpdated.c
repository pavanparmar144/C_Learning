void main(){
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    printf("Enter the value of b:\n");
    scanf("%d",&b);

    printf("Enter the value of c:\n");
    scanf("%d",&c);

    if(a==b==c){
        printf("\n all values are same %d\n",a);
    }
    else{
        if(a>=b && a>=c){
            printf("a is max number %d\n",a);
        }
        else{
            if(b>a && b>=c){
                printf("b is max number %d\n",b);
            }
            else{
                printf("C is max number %d\n",c);
            }
        }
    }
}