//2. Given an array count the occurrence of all element in that array, if array is empty return -1
#include <stdio.h>
int occurofallele(int si,int arr[10],int occarr[10]);

int main()
{
	int arr[10], occarr[10], i, j, count, size,m;

	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &size);

	printf("\n Please Enter %d elements of an Array  :  ", size);
	for (i = 0; i < size; i++)
	{
    	scanf("%d", &arr[i]);
    	occarr[i] = -1;
   	}
   	occurofallele(size,arr,occarr);
   	//printf("%d",m);
}
 int occurofallele(int si,int arr[10],int occarr[10])
 {
     int count,i,j;
     for (i = 0; i < si; i++)
	{
		count = 1;
		for(j = i + 1; j < si; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			count++;
    			occarr[j] = 0;
    		}
    	}
    	if(occarr[i] != 0)
    	{
    		occarr[i] = count;
		}
	}

 	printf("\n Frequency of All the Elements in this Array are : \n");
 	for (i = 0; i < si; i++)
  	{
  		if(occarr[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", arr[i], occarr[i]);
  		}
  	}

 }

