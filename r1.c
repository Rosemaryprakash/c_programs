#include<stdio.h>
#define N 5
void disp(int a[N],int start,int end)
{
	if(start<end)
	{
		printf("%d\t",a[start]);
		disp(a,start+1,end);
	}
}
void main()
{
	int n,i;
	int a[n];
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
	disp(a,0,n);
}
