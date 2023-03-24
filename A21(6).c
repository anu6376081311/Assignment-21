#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[30];
    int salary;
};
int main()
{
    struct Employee e[5] ,temp;
    int i,j;
    

    for(i=0;i<10;i++) 
    {
    printf("Enter name of employee \n");
    fflush(stdin);
    fgets(e[i].name,30,stdin);
    
    printf("Enter name of id \n");
    scanf("%d",&e[i].id);

    printf("Enter salary \n");
    scanf("%d",&e[i].salary);
    }
    printf("Employees according to their salaries are :  \n");
    for(int i=0;i<10-1;i++)
       {
         for(int j=0;j<10-1-i;j++)
          {
            if(strcmp(e[i].name ,e[j].name) > 0)
            {

                temp = e[i];
                e[i] = e[j];
                e[j] = temp;

            }
          }
         
       }
    for(int i=0;i<10;i++)
  {

      printf("%d %d \n",e[i].id,e[i].name);
  }

    return 0;
}
