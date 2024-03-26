#include<stdio.h>
int main()
{
	char s1[100],s2[100],t;
	int i,j,f;
	printf("Enter first string:");
	fgets(s1,100,stdin);
	printf("Enter second string:");
	fgets(s1,100,stdin);
	
	for(i=0;s1[i]!='\0';i++);
	{
		f=0;
		for(j=0;j<i;j++);
		{
			if(s1[i]==s1[j])
			{
				f=1;
				break;
			}
		}
	}
	if(f==0)
	{
		for(j=0;s2[j]!='\0';j++)
		{
			if(s1[i]==s2[j])
			{
				printf("%c",s1[i]);
				break;
			}
		}
	}
}
