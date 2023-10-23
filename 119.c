#include<stdio.h>
#define N 10
void disp(int a[N],int n)
{
	int i;
	/*for(i=n;i!=n;i--)
	{
		printf("%d\t",a[n-1]);
		break;
	}*/
	if(n==1)
	{
		printf("%d\t",a[n-1]);
	}
	else
	{
		printf("%d\t",a[n-1]);
		disp(a,n-1);
	}
}
void main()
{
	int a[N];
	int n,i;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&a[i]);
	}
	disp(a,n);
}
