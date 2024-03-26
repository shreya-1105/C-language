#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	if(ispunct(ch))
	printf("Entered character is an punctuation");
	else
	printf("Entered character is not punctuation");
}
