//3. Program to create a Student structure array, pass it to function, print that array in that function
#include <stdio.h>
#include <string.h>

struct student
{
     char name[30];
     int rollno;

};
void func(struct student *record);
int main()
{
     int i;
     struct student record[3];
     for(i=0;i<3;i++)
     {   printf("enter name and roll no of %d student",i+1 );
         scanf("%s",record[i].name);
         scanf("%d",&record[i].rollno);

     }
     func(&record);
     return 0;

}
 void func(struct student *record)
 {int i;
     for(i=0;i<=2;i++)
     {   printf("details of %d student\n",i+1);
         printf("%s\n",record[i].name);
         printf("%d\n",record[i].rollno);
     }
 }
