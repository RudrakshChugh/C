// REVERSE OF A NUMBER
#include<stdio.h>
int main(){
    int a,r,p=0;
    
    printf("Enter your number :");
    scanf("%d",&a);

    while(a>=1){
        r=a%10;
        p=p*10+r;
        a=a/10;
    }
    printf("%d",p);
    return 0;
}


             