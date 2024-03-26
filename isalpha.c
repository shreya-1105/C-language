#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	if(isalpha(ch))
	printf("Entered character is an alphabet");
	else
	printf("Entered character is not an alphabet");
}
