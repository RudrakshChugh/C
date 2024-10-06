// MARKS
// #include<stdio.h>
// int main(){

//     int Marks[5];
//     int i;

//     printf("Enter Number : ");
//     for(i=0;i<=4;i++)
//     {
//     scanf("%d",&Marks[i]);
//     }

//     printf("Marks\tIndex\tPosition\n");

//     for(i=0;i<=4;i++)
//     {
//         printf("%d\t", Marks[i]);
//         printf("%d\t", i);
//         printf("%d\t", i+1);
//         printf("\n");
//     }

//     return 0;
//  }

// #include<stdio.h>
// int main () {
// int marks [5];
// int i;

// printf("enter the number");

// for (i=0; i<=4; i++)
// {
// scanf("%d",& marks[i]);
// }
// printf("marks :\n");
//  for (i=0; i<=4; i++)
// {
// printf("%d", marks[i]);
// printf("\n");
// }

// return 0;

// }

// GREATEST MARKS OF 5 STUDENTS
// #include <stdio.h>
// int main()
// {
//     int marks[5];
//     int i;

//     printf("enter the number");

//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &marks[i]);
//     }
//     int g = marks[0];
//     for (i = 1; i <= 4; i++)
//     {
//         if (g < marks[i])
//         {
//             g = marks[i];
//         }
//     }
//     printf("%d\t", g);

//     return 0;
// }

// SUM OF ELEMENTS OF MATRIX
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int a[3][3];     // [rows][coloumns] 
//     printf("Enter number:");
//     for (i = 0; i <= 2; i++)
//     {

//         for (j = 0; j <= 2; j++)
//         {
//             printf("Enter number[%d][%d]", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 2; j++)
//         {

//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }

//     int s = 0;
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 2; j++)
//         {
//             s = s + a[i][j];
//         }
//     }
//       printf("Sum is:%d", s);
//         return 0;

// }

// MATRIX 2D ARRAY
// #include <stdio.h>
// int main()
// {
//     int a[3][3];
//     int i, j;
//     printf("Enter Elements of matrix A: ");
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             scanf("%d", &a[i][j]);
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nSum of all elements is: ");
//     int sum = 0;
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             sum = sum + a[i][j];
//         }
//     }
//     printf("%d", sum);
//     printf("\n\n----------Even Number----------");
//     printf("\n\nEven\trow\tcoloumn\tsquare\n");
//     int count = 0;
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             if (a[i][j] % 2 == 0)
//             {
//                 printf("%d\t", a[i][j]);
//                 printf("%d\t", i);
//                 printf("%d\t", j);
//                 printf("%d\t", a[i][j] * a[i][j]);
//                 count++;
//             }
//             printf("\n");
//         }
//     }
//     printf("Count of even numbers is: %d", count);
//     printf("\nSum of all even numbers: ");
//     int s = 0;
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             if (a[i][j] % 2 == 0)
//             {
//                 s = s + a[i][j];
//             }
//         }
//     }
//     printf("%d", s);
//     printf("\n\n----------Odd Number----------");
//     printf("\nodd\trow\tcoloumn\tsquare\n");
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             if (a[i][j] % 2 != 0)
//             {
//                 printf("%d\t", a[i][j]);
//                 printf("%d\t", i);
//                 printf("%d\t", j);
//                 printf("%d\t", a[i][j] * a[i][j] * a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     printf("\nSum of all odd numbers: ");
//     int o = 0;
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             if (a[i][j] % 2 != 0)
//             {
//                 o = o + a[i][j];
//             }
//         }
//     }
//     printf("%d", o);
//     printf("\n\n-----------------------------------");
//     int m = 0;
//     for (int i = 0, j = 0; j <= 2; j++)
//     {
//         m = m + a[i][j];
//     }
//     printf("\n\nSum of First row of a matrix is: %d", m);

//     int n = 0;
//     for (int i = 0, j = 0; i <= 2; i++)
//     {
//         n = n + a[i][j];
//     }
//     printf("\n\nSum of First coloumn of a matrix is: %d", n);

//     int k = 0;
//     for (int i = 1, j = 0; j <= 2; j++)
//     {
//         k = k + a[i][j];
//     }
//     printf("\n\nSum of second row of a matrix is: %d", k);

//     int d = 0;
//     for (int i = 0, j = 1; i <= 2; i++)
//     {
//         d = d + a[i][j];
//     }
//     printf("\n\nSum of Second coloumn of a matrix is: %d", d);

//     int e = 0;
//     for (int i = 2, j = 0; j <= 2; j++)
//     {
//         e = e + a[i][j];
//     }
//     printf("\n\nSum of Third row of a matrix is: %d", e);

//     int f = 0;
//     for (int i = 0, j = 2; i <= 2; i++)
//     {
//         f = f + a[i][j];
//     }
//     printf("\n\nSum of Second coloumn of a matrix is: %d", f);

//     int g = 0;
//     for (i = 0, j = 0; i <= 2, j <= 2; i++, j++)
//     {
//         g = g + a[i][j];
//     }
//     printf("\n\nSum of First diagonal element: %d", g);

//     int y = 0;
//     for (i = 0, j = 2; i <= 2, j >= 0; i++, j--)
//     {
//         y = y + a[i][j];
//     }
//     printf("\n\nSum of Second diagonal element: %d", y);

//     int r = n + g - a[0][0] + a[2][1];
//     printf("\n\nSum of First Diagonal and first coloumn is: %d", r);
// }

// #include <stdio.h>
// int main()
// {

//     int i, j;
//     int a[3][3], b[3][3];
//     printf("Matrix 1\n");
//     for (i = 0; i <= 2; i++)
//     {

//         for (j = 0; j <= 2; j++)
//         {
//             printf("Enter number[%d][%d]", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int flag=1;
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 2; j++)

//         {

//             if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
// {
//     flag = 0;
//     break;
// }

//         }[
//     }

//     if (flag == 1)
//     {
//         printf("It is an Identity Matrix");
//     }
//     else
//     {
//         printf("Not A Identity Matrix");
//     }
// }  



// Multipliaction of 2 matrix
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][2],c[3][2];

//     printf("Enter Elements of matrix A: ");
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             scanf("%d", &a[i][j]);
//             // printf("%d\t", a[i][j]);
//         }
//         // printf("\n");
//     }
//     printf("Enter Elements of matrix B: ");
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 1; j++)
//         {
//             scanf("%d", &b[i][j]);
//             // printf("%d\t", a[i][j]);
//         }
//     }
//         printf("\nANSWER :\n");

//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 1; j++){
//             for(int k=0;k<=2;k++){
//                 c[i][j] =+ a[i][k] * b[k][j];
//             }
//             printf("%d\t", c[i][j]);
//         }
//             printf("%d\n");
//     }   
// }

//  TRANSPOSE OF A MATRIX
// #include <stdio.h>

// int main() {
//     int matrix[MAX_SIZE][MAX_SIZE];
//     int transpose[MAX_SIZE][MAX_SIZE];
//     int rows, cols;

//     printf("Enter number of rows and columns of matrix: ");
//     scanf("%d %d", &rows, &cols);

//     printf("Enter elements of matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     printf("Original matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     printf("Transpose of matrix:\n");
//     for (int i = 0; i < cols; i++) {
//         for (int j = 0; j < rows; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// MATRIX SUM ODD EVEN SQUARE
// #include<stdio.h>
// int main ()
// {
// int i,j ;

// int a[3][3];
// printf("enter the element: ");
// for(i=0;i<=2;i++)
// {
// for(j=0;j<=2;j++)
// {
// scanf("%d", &a[i][j]);
// }
// }
// for(i=0;i<=2;i++)
// {
//     for(j=0;j<=2;j++)
//     {
//         printf(" %d ", a[i][j]);
//     }
//     printf("\n");
// }
// int s=0;
// for(i=0;i<=2;i++)
// {
//     for(j=0;j<=2;j++)
//     {
//         s=s+a[i][j];
//     }
// }
// printf("sum of matrics is :%d",s);
// return 0;
// int s=0;
// int d=0;
// printf("even\tsquare\n");
// for(i=0;i<=2;i++)
// {
//     for(j=0;j<=2;j++)
//     {
//         if(a[i][j]%2==0)
//         {
//         printf("%d\t",a[i][j]);
//         printf("%d\n",a[i][j]*a[i][j]);
//         s=s+a[i][j];
//         d=d+a[i][j]*a[i][j];
//         }
//     }
// }
// printf("the sum is :%d",s);
// printf("\nthe sum of square is :%d",d);
// return 0;
// }


//SWap withouyt 3rd Variable
// #include <stdio.h>
// int main()
// {
//     int x = 10, y = 5;

//     // Code to swap 'x' and 'y'
//     x = x + y; // x now becomes 15
//     y = x - y; // y becomes 10
//     x = x - y; // x becomes 5

//     printf("After Swapping: x = %d, y = %d", x, y);

//     return 0;
// }



