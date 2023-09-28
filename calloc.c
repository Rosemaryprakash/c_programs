#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a;
	int i,n;
	printf("Enter the limit : ");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	free(a);
}
