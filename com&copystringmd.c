/*Write a menu driven program to perform the following
operations on strings using standard library functions:
i) Compare
ii) Copy*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100],s[100];
	int ch;
	do
	{
	printf("\nMenu\n 1.compare\n2.copy\n");
	printf("Enter choice::");
	scanf("%d",&ch);
	switch(ch)
	{
	 	case 1: printf("Enter first string::\t");
	 			scanf("%s",s1);
	 			printf("Enter second string::\t");
	 			scanf("%s",s2);
	 			  if(strcmp(s1,s2)==0)
			               {
			               		printf("\nboth strings are equal!!");
			               }
			                 else if(strcmp(s1,s2)>0)
			               {
			               		printf("%s is greater ",s1);
			               }
			               else
			               {
			               		printf("%s is greater",s2);
			               }
			              
			               break;
		case 2:printf("Enter  string::\t");
				scanf("%s",s1);
				
				printf(" \ncopied string is:%s",strcpy(s1,s1));
					break;
	 			
	 			
	}
	}while(ch!=3);
}
