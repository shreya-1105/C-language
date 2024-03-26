//accept 2*3 matrix and display it
#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	
	printf("Enter first matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		 scanf("%d",&a[i][j]);
		}	
	}
	
	printf("Enter second matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");	
	}
	printf("Addition of matrix is:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");	
	}
	
	printf("Addition of matrix is:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		 	printf("%d\t",c[i][j]);
		}	
	}	
}

