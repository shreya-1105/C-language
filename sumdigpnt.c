#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,s=0;
	printf("Enter limit:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n sum:");
	for(i=n-1;i>=0;i--)
	{
	 s=s+*(p+i);
	}
		printf("%d",s);
}
