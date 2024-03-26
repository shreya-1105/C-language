#include<stdio.h>
int main()
{
	struct student
	{
		int rno;
		char sname[20];
		float per;
	}s[10];
	
	int i,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter student roll no:");
		scanf("%d",&s[i].rno);	
		printf("Enter student name:");
		scanf("%s",&s[i].sname);
		printf("Enter student percentage:");
		scanf("%f",&s[i].per);
	}
	for(i=0;i<n;i++)
	{
		printf("\nstudent roll no:%d",s[i].rno);
		printf("\nstudent name:%s",s[i].sname);
		printf("\nstudent percentage:%f",s[i].per);
	}
}
