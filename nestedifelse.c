#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Physics Marks");
    scanf("%d",&a);
    printf("Enter Chemistry Marks");
    scanf("%d",&b);
    printf("Enter Maths Marks");
    scanf("%d",&c);

    if(a>=65){
        if(b>=55){
            if(c>=50){
                if(a+b >= 120 || a+b+c>=190){

                    printf("Pass");
                }

            }
        }
}else{
    printf("Fail");
}
return 0;
}