#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i;
	
	printf("Enter string");
	gets(s);
	
	printf("Alternate characters are:");
	for(i=0;s[i]!='\0';i=i+2)
	{
		printf("%c",s[i]);
	}
}
