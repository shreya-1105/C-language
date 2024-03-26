#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
    ch=tolower(ch);
	printf("Uppercase character is:%c",ch);
	
}
