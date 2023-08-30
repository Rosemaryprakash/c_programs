#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yyyy;
}d1,d2;
int read()
{
	printf("Enter the first day month and year : ");
	scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yyyy);
	printf("Enter the second day month and year : ");
	scanf("%d%d%d",&d2.dd,&d2.mm,&d2.yyyy);
}
int disp()
{
	printf("%d-%d-%d\n",d1.dd,d1.mm,d1.yyyy);
	printf("%d-%d-%d\n",d2.dd,d2.mm,d2.yyyy);
}
int compare()
{
	if(d1.dd==d2.dd&&d1.mm==d2.mm&&d1.yyyy==d2.yyyy)
	printf("Dates are equal");
	else
	printf("Not equal");
}
int main()
{
	struct date d1;
	struct date d2;
	read();
	disp();
	compare();
}
