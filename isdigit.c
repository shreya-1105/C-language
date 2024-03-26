#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	if(isdigit(ch))
	printf("Entered character is an number");
	else
	printf("Entered character is not number");
}
