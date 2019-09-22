//1. Given an array count the occurrence of an element in that array, if it is not present return -1
#include <stdio.h>
#define MAX 100
int occurofele(int c,int x,int arr[MAX]);

int main()
{
    int arr[MAX],n,i,count=0,m;
    int num;

    printf("Enter total number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter number to find Occurrence: ");
    scanf("%d",&num);

    m=occurofele(n,num,arr);
    printf("%d",m);
}
int occurofele(int c,int x,int arr[MAX])
{
    int count,i;

    count=0;
    for(i=0;i<c;i++)
    {
        if(arr[i]==x)
        count++;
    }
    if(count==0)
        return -1;
    else
       printf("%d",count);
}
