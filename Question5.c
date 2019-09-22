//5. To find whether the substring is present in the string:
#include<stdio.h>
#include<string.h>
int find(char str[100],char s[50]);
int main()
{   int m;
   char st[100],su[50];
   printf("enter string");
   scanf("%s",st);
   printf("enter sub");
   scanf("%s",su);
    if(m==-1)
        printf("not found");
    else
        printf("found");
    return 0;

}
int find(char str[100],char s[50])
{
    int i,j,k,l;
    l=strlen(s);
    for(i=0;str[i]!='\0';i++)
    {
        k=i;
        for(j=0;j<=l-1;j++)
        {
            if(str[k]!=s[j])
                break;
            k++;
        }
        if(j==l)
            return(i);
    }
    return(-1);

}
