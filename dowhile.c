#include <stdio.h>
int main()
{

    int a, b, c;
    char d;
    printf("enter 2 numbers");
    scanf("%d %d", &a, &b);
    do
    {
        printf("1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division ");

        printf("enter Operation");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            printf("%d", a + b);
            break;
        case 2:
            printf("%d", a - b);
            break;
        case 3:
            printf("%d", a * b);
            break;
        case 4:
            printf("%d", a / b);
            break;
        default:
            printf("Invalid");
        }

        printf("do you want to run again");
        scanf("%s", &d);
    } while (d == 'y');
    return 0;
}