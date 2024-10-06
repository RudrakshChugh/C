#include<stdio.h>
struct employee{
    int companyno;
    char companyname[20];
    char Department[20];
    char Designation[20];
    char dateofjoining[20];
    int Basicsalary;
    float TA;
    float DA;
    float HRA;
    float PF;
    float NetSalary;
};
int main()
{     
    struct employee e[5];
    for(int i=0;i<5;i++){
        printf("Enter Company number :");
        scanf("%d",&e[i].companyno);

        printf("Enter Comapny Name:");
        scanf("%s",e[i].companyname);

        printf("Enter Department:");
        scanf("%s",e[i].Department);

        printf("Enter Designation:");
        scanf("%s",e[i].Designation);

        printf("Enter Date Of Joining:");
        scanf("%s",e[i].dateofjoining);

        printf("Enter Basic Salary:");
        scanf("%d",&e[i].Basicsalary);

        e[i].TA=e[i].Basicsalary*0.02;
        e[i].DA=e[i].Basicsalary*0.03;
        e[i].HRA=e[i].Basicsalary*0.04;
        e[i].PF=e[i].Basicsalary*0.1;
        e[i].NetSalary=e[i].Basicsalary+e[i].TA+e[i].DA+e[i].HRA-e[i].PF;
    }


    printf("\nDetails of employees entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Company Number: %d\n", e[i].companyno);
        printf("Company Name: %s\n", e[i].companyname);
        printf("Department: %s\n", e[i].Department);
        printf("Designation: %s\n", e[i].Designation);
        printf("Date Of Joining: %s\n", e[i].dateofjoining);
        printf("Basic Salary: %d\n", e[i].Basicsalary);
        printf("TA: %f\n", e[i].TA);
        printf("DA: %f\n", e[i].DA);
        printf("HRA: %f\n", e[i].HRA);
        printf("PF: %f\n", e[i].PF);
        printf("Net Salary%f\n:",e[i].NetSalary);
    }
    return 0;
}




// #include<stdio.h>
// struct employee
// {
// int companyno;
// char companyname[20];
// char department[20];
// char designation[20];
// char dateofjoining[20];  
// int basicsalary;
// float ta,da,hra,pf,netsalary;
// };

 
// int main ()
// {struct employee e[5];
// for(int i=0;i<5;i++)
// {
// printf("Enter the company no: ");
// scanf("%d", & e[i].companyno);
// printf("Enter the company name : ");
// scanf("%s", & e[i].companyname);
// printf("Enter the department : ");
// scanf("%s", & e[i].department);
// printf("Enter the deposition : ");
// scanf("%s", & e[i].designation);
// printf("Enter the dateofjoining: ");
// scanf("%s", & e[i].dateofjoining);
// printf("Enter basic salary:");
// scanf("%d", e[i].basicsalary);

// e[i].ta=e[i].basicsalary*0.02;
// e[i].da=e[i].basicsalary*0.03;

// }


// } 






