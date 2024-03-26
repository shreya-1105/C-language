#include<stdio.h>
int main()
{
	int n,max,i,*p;
	printf("Enter limit:");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter array elements:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	for(p=&a[0],i=0;i<n;i++,p++)
	{
		if(max<*p)
		{
			max=*p;
		}
	}
	printf("max=%d",max);
}

