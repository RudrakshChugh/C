#include<stdio.h>
int main()
{
float si,principal,rate,time;

printf("Enter the Principal value : ");
scanf("%f",&principal);
printf("enter rate : ");
scanf("%f",&rate);
printf("Enter time : ");
scanf("%f",&time);

si = (principal*rate*time)/100;

printf("your Simple Interest is : %f",si);

return 0;
}