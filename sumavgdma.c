#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,cnt=0,i,n,max=0,s=0,avg;
	
	printf("Enter limit:");
	scanf("%d",&n);
	
	p=(int *)malloc(n*sizeof(int));
	
	printf("\nEnter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	for(i=0;i<n;i++)
	{
		if((p+i)!=0)
		{
			s=s+*(p+i);
			cnt++;
		}
	}
			printf("\nsum of the non zero elements is=%d",s);
 			avg=s/cnt;
 			printf("\naverage of the  elements is=%d",avg);

}

