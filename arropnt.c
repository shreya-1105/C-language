#include<stdio.h>
int main()
{
 	int *p,arr[10],n,i;
 	
 	printf("Enter array limit:");
 	scanf("%d",&n);
 	
 	printf("Enter array elements:");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
 	}
 	
 	p=arr;
 	printf("value of array are =%d\t",*p);//base address 1
 	printf("value of array are =");
 	for(i=0;i<n;i++)
 	{
 		printf("%d\t",*(p+i));
 	}
 	
}
