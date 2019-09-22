//print triangle pattern
#include<stdio.h>

#define MAX	3

int main()
{
    int i,j;
    int space=0;

    for(i=1;i<=MAX;i++)
    {

	    for(j=1;j>=space;j--)
	    {
		    printf(" ");
	    }
	    for(j=1;j<=i;j++)
	    {
		    printf("* ");
	    }

	    printf("\n");
	    space++;
    }
    return 0;
}
