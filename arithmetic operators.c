#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div,mod;
	
	printf("Enter first number:");
	scanf("%d",&a);

	printf("Enter second number:");
	scanf("%d",&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
    
    printf("\nAddition is :%d",add);
    printf("\nSubtraction is :%d",sub);
	printf("\nMultiplication is :%d",mul);
	printf("\nDivision is :%d",div);
	printf("\nModulus is :%d",mod);
}
