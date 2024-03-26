#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,max=0;
	
	printf("Enter limit:");
	scanf("%d",&n);
	
	p=(int *)malloc(n*sizeof(int));
	
	printf("Enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	max=p[0];
	for(i=0;i<n;i++)
	{
		if(p[i]>max)
		{
			max=p[i];
		}
	}
	printf("max no is:%d",max);
}
