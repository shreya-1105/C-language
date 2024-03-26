#include<stdio.h>
int main()
{
	int *p,i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n Numbers:");
	for(i=n-1;i>=;i--)
	{
		printf("%d\t",*(p+i));
	}
}
