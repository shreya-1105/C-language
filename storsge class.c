#include<stdio.h>
void func()
{
	register int count=0;
	count=count+1;
	printf("%d\t",count);
}

int main()
{
	int i;
	for(i=0;i<5;i++)
	func();
}

