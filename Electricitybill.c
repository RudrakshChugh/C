#include<stdio.h>
int main(){

    int a;
    float unit,bill,price;
    printf("enter your customer id :");
    scanf("%d" , &a);
    printf("No of units used : ");
    scanf("%f", &unit);
    

    if(unit<=199){
        price=1.20;}
    else if(unit>=200 && unit<=400){
        price=1.50
    ;}else if(unit>=400 && unit<=600){
        price=1.80
    ;}else{
        price=2.00
    ;}

    bill= unit * price;
    
     printf("Your total bill is: %f", bill);
 return 0;

}