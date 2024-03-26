#include<stdio.h>
void main()
{
	int n,i;
	char ch;
	
	printf("Enter a character:");
	scanf("%c",&ch);
	printf("Enter a number as limit:");
	scanf("%d",&n);
	
	printf("\n Next n characters are:");
	for(i=1;i<=n;i++)
	{
		ch=ch+1;
		printf("%c\t",ch);
	}
}
