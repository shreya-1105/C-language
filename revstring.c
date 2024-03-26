#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,cnt;
	printf("Enter string::");
	fgets(s,100,stdin);
	
	for(i=0;s[i]!='\0';i++)
	{
		cnt++;
	}
	printf("Reversed string is::");
	for(i=cnt;i>=0;i--)
	{
		printf("%c",s[i]);
	}
}
