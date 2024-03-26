#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	 
	printf("Enter matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n odd numbers in matrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2!=0)
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
