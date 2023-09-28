#include <stdio.h>
void print(int a[], int n)
{
    if(n==0)
    {
        printf("%d\n", a[n]);
    }
    else
    {
        printf("%d\n", a[n]);
        print(a,n-1);
    }
}
void main()
{
    int n = 10;
    int a[10];
    int i;  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &a[i]);  
    }  
    printf("\n");
    print(a,n-1);
}
