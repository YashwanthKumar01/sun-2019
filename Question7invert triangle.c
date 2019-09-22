//print inert triangle pattern
#include<stdio.h>

#define MIN	1

int main()
{
    int i,j;
    int space=3;

    for(i=3;i>=MIN;i--)
    {

	    for(j=3;j>space;j--)
	    {
		    printf(" ");
	    }
	    for(j=1;j<=i;j++)
	    {
		    printf("* ");
	    }

	    printf("\n");
	    space--;
    }
    return 0;
}
