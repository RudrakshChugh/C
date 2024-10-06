#include <stdio.h>
struct employee
{
    int Employeeno;
    char Companyname[20];
    char Department[20];
    char Designation[20];
    char dateofjoining[20];
    int Basicsalary;
    
};

void Add()
{
    struct employee e;                           // fgets - Read , fputs-write
    FILE *F;
    F = fopen("emp.txt", "a"); // a - Append
    printf("Enter employee number: \t");
    scanf("%d", &e.Employeeno);
    printf("Enter employee name: \t");
    scanf("%s", &e.Companyname);
    printf("Enter Department: \t");
    scanf("%s", &e.Department);
    printf("Enter Designation: \t");
    scanf("%s", &e.Designation);
    printf("Enter Date of Joining: \t");
    scanf("%s", &e.dateofjoining);
    printf("Enter Basic Salary: \t");
    scanf("%d", &e.Basicsalary);
    fwrite(&e, sizeof(e), 1, F);
    printf("Record Added\n");
    fclose(F);
}
void Display()
{
    struct employee e;
    FILE *F;    
    F = fopen("emp.txt", "r");
    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", e.Employeeno);
    printf("Company Name: %s\n", e.Companyname);
    printf("Department: %s\n", e.Department);
    printf("Designation: %s\n", e.Designation);
    printf("Date Of Joining: %s\n", e.dateofjoining);
    printf("Basic Salary: %d\n", e.Basicsalary); 
}
int Search()
{
    struct employee e;
    int empNo;
    FILE *f;
    f = fopen("emp.txt", "r"); 
    printf("Enter employee number: \t");
    scanf("%d", &empNo);
    while (fread(&e, sizeof(e), 1, f))
    {
        if (e.Employeeno == empNo)
        {
            printf("Employee Number\tEmployee Name\tDepartment\tDesignation\tDate of Joining\tBasicSalary\n");
            printf("%d\t%s\t%s\t%s\t%f\t%d\t%d\n", e.Employeeno, e.Companyname, e.Department, e.Designation, e.dateofjoining, e.Basicsalary);
        }
    }
    fclose(f);
}
int Update()
{
    struct employee e;
    int empNo; 
    FILE *f, *ft;
    f = fopen("emp.txt", "r");
    ft = fopen("temp.txt", "w");
    printf("Enter employee number to update: \t");
    scanf("%d", &empNo);
    while (fread(&e, sizeof(e), 1, f))
    {
        if (e.Employeeno != empNo)
        {
            fwrite(&e, sizeof(e), 1, ft);
        }
        else
        {FILE *f, *ft;}
        }    
    f = fopen("emp.txt", "r");
    ft = fopen("temp.txt", "w");
    printf("Enter employee number to update: \t");
    scanf("%d", &empNo);
    fclose(f);
    fclose(ft);
    remove("emp.txt");
    rename("temp.txt", "emp.txt");
    printf("Record Updated\n");
}

int Delete()
{
 
}
int main()
{
    int a;
    while(a!=6){
    printf("Welcome to Employee Management System\nEnter your Choice\n");
    printf("Press 1 to Add a Record\nPress 2 to Display all Records\nPress 3 to Search a Record\nPress 4 to Update a Record\nPress 5 to Delete a Record\nPress 6 to Save Your File");
    scanf("%d", &a);
    
    switch (a)
    {
    case 1:Add();
        break;
    case 2:Display();
        break;
    case 3:Search();
        break;
    case 4:Update();
        break;
    case 5:Delete();
        break;
    case 6: printf("Thankyou");
        break;
    default:
        printf("Invalid");
    }}

    struct employee e1;
    {

        printf("Enter Company number :");
        scanf("%d", &e1.Employeeno);

        printf("Enter Comapny Name:");
        scanf("%s", e1.Companyname);

        printf("Enter Department:");
        scanf("%s", e1.Department);

        printf("Enter Designation:");
        scanf("%s", e1.Designation);

        printf("Enter Date Of Joining:");
        scanf("%s", e1.dateofjoining);

        printf("Enter Basic Salary:");
        scanf("%d", &e1.Basicsalary);
        
    }
    return 0;
}

