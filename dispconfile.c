#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *f1;
	
	f1=fopen("student.txt","r");
	if(f1==NULL)
	{
		printf("File not found!!!");
		exit(0);
	}
	while(!feof(f1))
	{
		ch=getc(f1);
		printf("%c",ch);
	}
}
