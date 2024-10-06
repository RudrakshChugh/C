#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    printf("Enter 4th number : ");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("The greatest number is : %d",a);
    }else if (b>c && b>d && b>a){
        printf("The greatest number is : %d",b);
    }else if (c>a && c>b && c>d){
        printf("The greatest number is : %d",c);
    }else {
        printf("The greatest number is : %d",d);
    }

    return 0;
}