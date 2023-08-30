#include<stdio.h>
#define N 5
int n=-1;
int a[N];
void insert()
{
	int i;
	int b;
	if(n+1==N)
	{
		printf("Array is full");
	}
	else
	{
		printf("Enter the number of elements");
		scanf("%d",&b);
		for(i=0;i<b;i++)
		{
			n=n+1;
	    	printf("Enter a number");
	    	scanf("%d",&a[n]);
		}
	
	}
}
void disp()
{
	int i;
	if(n==-1)
	{
		printf("Array is empty");
	}
	else
	{
		for(i=0;i<=n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
void sort()
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			    temp=a[i];
			    a[i]=a[j];
			    a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	    printf("%d",a[i]);
	}
}
int menu()
{
	int choice;
	printf("1. Insert\n2. Display\n3. Sort\n4. Exit\nEnter your choice");
	scanf("%d",&choice);
	return choice;
}

int op()
{
	int choice;
	for(choice = menu();choice!=4;choice=menu())
	{
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				disp();
				break;
			case 3:
				sort();
				break;
			default :
				printf("Wrong Choice");
				break;
		}
	}
}
void main()
{
	op();
	
}
