#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	if(isalnum(ch))
	printf("Entered character is an alphabet or number");
	else
	printf("Entered character is not alphabet or number");
}
