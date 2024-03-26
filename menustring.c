#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char  s1[100],s2[100];
	int ch;
	printf("Enter string:");
 	fgets(s1,100,stdin);
	do
	{
		printf("\nMENU::\n1.length\n2.copy\n3.concatenation\n4.compare\n5.Exit");
		printf("\nEnter choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("\nLenght of the string is:%ld",strlen(s1));
					break;
			case 2:printf(" \ncopied string is:%s",strcpy(s2,s1));
					break;
			case 3:char s3[100],s4[100];
					printf("\nEnter first string:");
					scanf("%s",s3);
					printf("\nEnter second string:");
					scanf("%s",s4);
					strcat(s3,s4);
					printf("\nconcate string is of the string is:%s",s3);
					break;
			case 4:
					printf("\nEnter first string:\n");
					scanf("%s",s3);
					printf("\nEnter second string:\n");
					scanf("%s",s4);
			                 
			                if(strcmp(s3,s4)==0)
			               {
			               		printf("\nboth strings are equal!!");
			               }
			                 else if(strcmp(s3,s4)>0)
			               {
			               		printf("%s is greater ",s3);
			               }
			               else
			               {
			               		printf("%s is greater",s4);
			               }
			              
			               break;
		}
	
	}while(ch!=5);
}
