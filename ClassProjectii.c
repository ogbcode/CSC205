#include<stdio.h>
char experience[4];
int salary;
int age;
int main()
{
    printf("are you experienced:\n");
    scanf("%s",&experience);
    printf("how old are you:\n");
    scanf("%d",&age);
    if(age>=40 && experience=='yes')
    {
        salary=560000;
    }
      if(30<= age<40 && experience=='yes')
    {
        salary=480000;
    }
      if(age<28 && experience=='yes')
    {
        salary=300000;
    }
      if (experience=='no')
    {
        salary=100000;
    }
}