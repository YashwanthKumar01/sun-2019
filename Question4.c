//4. Find the reverse of the number
#include<stdio.h>

int reverse(int i);

void main()
{
    int n,m;
    printf("enter number to reverse");
    scanf("%d",&n);

   m=reverse(n);
   printf("reverse of given num is %d",m);
}
int reverse(int i)
{
    int rev=0;
    while(i!=0)
    {
    rev=rev*10;
    rev=rev+i%10;
    i=i/10;
    }
    return(rev);
}
