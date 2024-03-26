#include<stdio.h>
int main()
{
	char s1[100],t;
	int i,j;
	printf("Enter string:");
	fgets(s1,100,stdin);
	
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;j<i;j++)
		{
			if(s1[i]<s1[j])
			{
				t=s1[i];
				s1[i]=s1[j];
				s1[j]=t;
		
			}
		}
	}
	printf("string in dictionary order:%s",s1);
}
