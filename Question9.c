//print multiplication table
#include<stdio.h>
int table(int m);
int main()
{
    int n;

    printf("enter number to find table");
    scanf("%d",&n);

    table(n);
    return 0;

}
int table(int m)
{ int i,j;

    for(j=0;j<=10;j++)
    {
       printf("%d*%d=%d\n ",m,j,m*j);
    }

}
