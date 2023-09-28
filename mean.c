#include<stdio.h>
#include<stdlib.h>
int read(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&a[i]);
	}
}
int disp(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int mean(int *a, int n)
{
	int i,sum=0,mean=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/n;
	printf("The mean is : %d",mean);
	return mean;
}
int main()
{
	int *a,n;
	printf("Enter the limit : ");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int));
	read(a,n);
	disp(a,n);
	mean(a,n);
}
