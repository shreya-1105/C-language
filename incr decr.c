#include<stdio.h>
int main()
{
	int a=8,b=2;
	int *p1,*p2;
	
	p1=&a;
	p2=&b;
	
	printf("\nValue at p1=%d",*p1);
	printf("\nValue at p2=%d",*p2);
	printf("\naddress at p1=%u",p1);
	printf("\naddress at p2=%u",p2);
	
	p1++;
	p2--;

	printf("\naddress at p1=%u",p1);
	printf("\naddress at p2=%u",p2);
}
