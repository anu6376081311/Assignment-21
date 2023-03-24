#include<stdio.h>
struct Employee
{
    int id;
    char name[30];
    int salary;
};
int main()
{
    struct Employee e[5];
    int i;

    for(i=0;i<3;i++) 
    {
    printf("Enter name of employee \n");
    fflush(stdin);
    fgets(e[i].name,30,stdin);
    
    printf("Enter name of id \n");
    scanf("%d",&e[i].id);

    printf("Enter salary \n");
    scanf("%d",&e[i].salary);
    }

    for(int i=0;i<3;i++)
    {
    printf("Name = %s,Id = %d,salary = %d  \n",e[i].name, e[i].id, e[i].salary);
    }
    return 0;

    }