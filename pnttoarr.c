#include<stdio.h>
int main()
{
	int a=200,a1[3]={1,2,3},a3=300,*ptr,*ptr1,*ptr3;
	
	ptr=&a;
	ptr1=a1;
	ptr3=&a;
	
	printf("\nvalue and address of a=%d\t%p",*ptr,ptr);
	printf("\nvalue and address of a1=%d\t%p",*ptr1,ptr1);
	printf("\nvalue and address of a3=%d\t%p",*ptr,ptr);
	
	printf("\nsize of a=%ld",sizeof(a));
	printf("\nsize of a1=%ld",sizeof(a1));
	printf("\nsize of a3=%ld",sizeof(a3));
}
