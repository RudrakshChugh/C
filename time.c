#include <stdio.h>

int main() {
    int hours,minutes,seconds;
    printf(" Enter Hours");
    scanf("%d",&hours);
printf(" Enter Minutes");
    scanf("%d",&minutes);
printf(" Enter Seconds");
    scanf("%d",&seconds);
   
    if(seconds>=60){
        minutes+=1;
        seconds-=60;}
    if(minutes>=60){
        hours+=1;
        minutes-=60;}
    
    printf("Hours%d",hours);
    printf("Minutes%d",minutes);
    printf("Secs%d",seconds);


return 0;}

