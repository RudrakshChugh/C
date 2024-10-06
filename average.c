#include <stdio.h>
int main()
{
    int rollno, hindi, english, maths;
    printf("Enter your roll no: ");
    scanf("%d", &rollno);
    printf("Enter your hindi marks: ");
    scanf("%d", &hindi);
    printf("Enter your english marks: ");
    scanf("%d", &english);
    printf("Enter your maths marks: ");
    scanf("%d", &maths);
    int Average = hindi + english + maths / 3;

          if (Average <= 100 && Average >= 90)
    {
        printf("Grade A");}
        else if (Average <= 90 && Average >= 70)
        {
            printf("Grade B");}
            else if (Average <= 70 && Average >= 50)
            {
                printf("Grade c");}
               else if (Average <= 50 && Average >= 40)
                {
                    printf("Grade D");}
                  else 
                    {
                        printf("Fail");}
                   
                    return 0;}