#include<stdio.h>
void main()
{
	int i,a[i],n,min,max;
	printf("enter a limit:");
	scanf("%d",&n);
	
	printf("Enter numbers in array:");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]<min)
	min=a[i];
	
	if(a[i]>max)
	max=a[i];
	}
	printf("Maximum no is:%d",max);
	printf("\n Minimum no is:%d",min);
}
