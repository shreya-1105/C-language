#include<stdio.h>
int main()
{
	struct emp
	{
		int eno;
		char ename[20];
		int salary;
	}e1[10];
	int i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
	{
	printf("Enter emp no:");
	scanf("%d",&e1[i].eno);
	
	printf("Enter emp name:");
	scanf("%s",&e1[i].ename);
	
	printf("Enter emp salary:");
	scanf("%d",&e1[i].salary);
    }
    for(i=0;i<n;i++)
    {
	printf("\nEmp number:%d",e1[i].eno);
	printf("\nEmp name:%s",e1[i].ename);	
	printf("\nEmp salary:%d",e1[i].salary);
	}
}
