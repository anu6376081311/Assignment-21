#include <stdio.h>
#include<string.h>
struct Employee
{
    int id[10];
    char a[10][20];
    int salari[10];
}b1;
void salaries(struct Employee  );



int main()
{
    for(int i=0;i<10;i++)
    {

        printf("Enter employee id\n");
        scanf("%d",&b1.id[i]);
        fflush(stdin);

        printf("Enter employee name\n");
        fgets(b1.a[i],20,stdin);
        b1.a[i][strlen(b1.a[i])-1]='\0';

        printf("Enter employee salaries\n");
        scanf("%d",&b1.salari[i]);


    }
    printf("Employees according to their salaries are :  \n");
    for(int i=0;i<10-1;i++)
       {
         for(int j=0;j<10-1-i;j++)
         {int tem=0,tem2=0;
            if(b1.salari[j]>b1.salari[j+1])
            {

                tem=b1.salari[j+1];
                b1.salari[j+1]=b1.salari[j];
                b1.salari[j]=tem;

                tem2=b1.id[j+1];
                b1.id[j+1]=b1.id[j];
                b1.id[j]=tem2;

            }

         }
       }
    for(int i=0;i<10;i++)
  {

      printf("%d %d \n",b1.id[i],b1.salari[i]);
  }

    return 0;
}
