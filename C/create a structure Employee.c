#include <stdio.h>
union emp
{
char name[30];
float salary;
int emp_no;
}e;
main()
{
printf("Enter Employee No:\n");
scanf("%d", &e.emp_no);
printf("\nEmployee No :%d\n", e.emp_no);
printf("Enter Name:\n");
scanf("%s", &e.name);
printf("\nEmployee Name :%s\n", e.name);
printf("Enter Salary: \n");
scanf("%f", &e.salary);
printf("\nEmployee Salary: %.2f", e.salary);
}