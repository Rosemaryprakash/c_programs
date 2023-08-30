#include<stdio.h>
#define N 5
void insert(int a[N], int n)
{
	int i;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements:");
		scanf("%d",&a[i]);
    }
}

void disp(int a[N], int n)
{
	int i;
	if(n==-1)
	{
		printf("Array is empty");
	}
	else
   {
	    for(i=0;i<n;i++)
	    {
		    printf("%d\t",a[i]);
    	}
	}
}
void sort(int a[N], int n)
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
	int a[N],n;
	int choice;
	for(choice = menu();choice<=4;choice=menu())
	{
		switch(choice)
		{
			case 1:
				insert(a,n);
				break;
			case 2:
				disp(a,n);
				break;
			case 3:
				sort(a,n);
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
