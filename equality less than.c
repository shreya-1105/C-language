#include<stdio.h>
void main()
{
	int x,y,no,c,ch;
	printf("\n 1-equality \n 2-less than \n 3-quotient and reminder \n 4-range \n 5-swap");
	
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	printf("Enter first number: ");
	scanf("%d",&x);

	printf("Enter second number: ");
	scanf("%d",&y);	
	
	switch(ch)
	{
		case 1:if(x==y)
		printf("x and y are equal");
		else
		printf("x and y are equal");
		break;	
		
		case 2:if(x>y)
				printf("%d is greater than %d",x,y);
				else
				printf("%d is greater than %d",x,y);
				break;	
		
		case 3: printf("Quotient is %d",x/y);	
				printf("Quotient is %d",x/y);
				break;
		
		case 4:printf("Enter a number to check in between");
				scanf("%d",&no);
				
				if(x<c&&y>c)
				printf("No is between %d and %d",x,y);
				
				else
				printf("No is not between %d and %d",x,y);
				break;
		case 5: c=x;
				x=y;
				y=c;
				printf("after swapping no are (x and y) %d and %d",x,y);
				break;
					
				
					
		
	}
}
