#include<stdio.h>
void swap(int *a,int *b)//defination
{
	int t;               //there is no need of function declaration when fun 
	t=*a;   					//defination is before the main function...
	*a=*b;
	*b=t;
	printf("\nValue of a after swapping is:%d",*a);
	printf("\nValue of b after swapping is:%d",*b);
}
int main()
{
	int a,b;
	printf("Enter value of first number:");
	scanf("%d",&a);
	printf("Enter value of second number:");
	scanf("%d",&b);
	
	printf("\nValue of a before swapping:%d",a);
	printf("\nValue of b before swapping:%d",b);
	
	swap(&a,&b);//calling
	
}
