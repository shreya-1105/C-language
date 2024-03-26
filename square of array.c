#include<stdio.h>
int main()
{
	int a[100],n,i,s=0;
	
	printf("Enter limit:");
	scanf("%d",&n);
	
	printf("Enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nSquare are:");
	for(i=0;i<n;i++)
	{
		s=a[i]*a[i];
		printf("%d\t",s);
	}
}
