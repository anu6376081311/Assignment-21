#include<stdio.h>
struct Employee
{
    int id;
    char name[30];
    int salary;
};
int main()
{
    struct Employee e;
    printf("Enter name of employee \n");
    gets(e.name);
    
    printf("Enter name of id \n");
    scanf("%d",&e.id);

    printf("Enter salary \n");
    scanf("%d",&e.salary);

    
    return 0;

    }