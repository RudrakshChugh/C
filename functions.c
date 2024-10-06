// BANK STRUCTURE
// #include <stdio.h>
// int a, b, c, d, e, f;
// int withdrawl(int b)
// {
//     if (b > a)
//     {
//         printf("Insufficient balance\n");
//     }
//     else
//     {
//         e = a - b;
//         return e;
//     }
// }
// int Deposit(int c)
// {
//     f = e + c;
//     return f;
// }

// int main()
// {
//     printf("Enter Opening Balance:");
//     scanf("%d", &a);
//     printf("Amount to be Withdrawn:");
//     scanf("%d", &b);
//     withdrawl(b);
//     printf("Amount to be Deposited:");
//     scanf("%d", &c);
//     Deposit(c);

//     printf("Your closing balance is:%d", f);
// }





// FUNCTION
// #include <stdio.h>
// int a, b, z;
// int Sum(int a, int b)
// {
//     return a + b;
// }
// int Mul(int a, int b) 
// {
//     return a * b;
// }
// int Sub(int a, int b)
// {
//     return a - b;
// }
// int Div(int a, int b)
// {
//     return a / b;
// }
// int main()
// {

//     printf("enter 2 numbers:");
//     scanf("%d", &a);
//     scanf("%d", &b);

//     printf("\nPress 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\n");
//     scanf("%d", &z);

//     switch (z)
//     {
//     case 1:
//       printf("%d", Sum(a, b));
//         break;
//     case 2:
//          printf("%d" , Sub(a, b));
//         break;
//     case 3:
//        printf("%d", Mul(a, b));
//         break;
//     case 4:
//         printf("%d",Div(a, b));
//         break;
//     default:
//         printf("Invalid");
//     }

//     return 0;
// }
