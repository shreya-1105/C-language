#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	
	printf("Enter first string:");
	gets(s1);
	printf("Enter second string:");
	gets(s2);
	
	strcat(s1,s2);
	printf("string concat:%s",s1);
}

