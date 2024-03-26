#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	char ch;
	int flag=0,i,n;
	
	printf("Enter string:");
	fgets(s,100,stdin);
	printf("Enter character to search:");
	scanf("%c",&ch);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==ch)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Character found");
	}
	else
	{
	printf("Character not found");
	}
}
