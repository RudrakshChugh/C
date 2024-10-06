#include <stdio.h>
int main()
{
    int a, b;
    printf("enter value of a :");
    scanf("%d", &a);
    printf("enter the value of b :");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}