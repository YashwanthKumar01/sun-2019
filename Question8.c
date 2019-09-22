#include<stdio.h>
void nmax(int[],int,int);
void main()
{
    int a[100],n,k,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into the array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("which max do you want?");
    scanf("%d",&k);
    nmax(a,n,k);
}
void nmax(int a[100],int n,int k)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d",a[k-1]);
}
