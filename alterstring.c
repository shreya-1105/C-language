#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i;
	printf("Enter string::");
	fgets(s,100,stdin);

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
		else if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			s[i]='?';
		}
		else if(s[i]==' ')
		{
			s[i]='*';
		}
	}
	printf("New string is::");
		puts(s);
}
	
