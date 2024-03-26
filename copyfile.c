#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *f1,*f2;
	f1=fopen("a.txt","r");
	f1=fopen("b.txt","w");
	if(f1==NULL)
	{
		printf("\n file not found");
		exit(0);
	}
	while(!feof(f1))
	{
		ch=getc(f1);
		fputc(ch,f2);
	}
	fclose(f1);
	fclose(f2);
	printf("file  copy successfully!!!");
}
