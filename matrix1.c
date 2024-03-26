//accept 2*3 matrix and display it
#include<stdio.h>
void main()
{
	int a[2][3],i,j;
	
	printf("Enter matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		 scanf("%d",&a[i][j]);
		}	
	}
	
	printf("matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}
}

