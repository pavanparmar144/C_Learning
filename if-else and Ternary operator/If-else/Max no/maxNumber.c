void main(){

    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    printf("Enter the value of b:\n");
    scanf("%d",&b);

    printf("Enter the value of c:\n");
    scanf("%d",&c);

    if(a>b){
        printf("\n a is max number\n");
    }else{
        if(b>c){
            printf("\n b is max number\n");
        }else{
            printf("\n c is max number\n");
        }
    }
}