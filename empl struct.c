#include<stdio.h>
#include<string.h>
#define N 2
struct employee
{
	int eno;
	char ename[10];
	int esal;
	int dno;
};
int read(struct employee e[N],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter eno : ");
		scanf("%d",&e[i].eno);
		printf("Enter ename : ");
		scanf("%s",&e[i].ename);
		printf("Enter esal : ");
		scanf("%d",&e[i].esal);
		printf("Enter dno : ");
		scanf("%d",&e[i].dno);
	}
}
int disp(struct employee e[N],int n)
{
	int i;
	printf("employee data\n");
	for(i=0;i<n;i++)
	{
		printf("eno : %d\t",e[i].eno);
		printf("ename : %s\t",e[i].ename);
		printf("esal : %d\t",e[i].esal);
		printf("dno : %d\n",e[i].dno);
	}
}
void search(struct employee e[N],int n)
{
	int num;
	int i,flag=-1;
	printf("Enter the no. : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(e[i].eno==num)
		{
			flag=i;
			break;
		}
	}
	if(flag!=-1)
	{
		printf("ename : %s\t",e[i].ename);
		printf("esal : %d\t",e[i].esal);
		printf("dno : %d\n",e[i].dno);
	}
	else
	{
		printf("Employee not found");
	}

}
void sortbyname(struct employee e[N],int n)
{
	int i,j;
	struct employee temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(e[j].ename,e[j+1].ename)>0)
			{
				temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
		}
	}
}
int main()
{
	struct employee e[N];
	read(e,N);
	disp(e,N);
	search(e,N);
	sortbyname(e,N);
	disp(e,N);
}
