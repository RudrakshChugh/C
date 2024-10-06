#include <stdio.h>
int main()
{
    int id, sp, cp;
    printf("enter the product id");
    scanf("%d", &id);
    printf("enter the selling price");
    scanf("%d", &sp);
    printf("enter the cost price");
    scanf("%d", &cp);

    int a, b;
    if (sp > cp)
    {
        a = sp - cp;
        printf("profit : %d", a);
    }
    else if (cp > sp)
    {
        b = cp - sp;
        printf("loss : %d", b);
    }
    else
    {
        printf("no profit no loss");
    }

    return 0;
}
