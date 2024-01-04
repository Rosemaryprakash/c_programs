#include<stdio.h>
#define N 3
char stack[N];
int top = -1;
void push(char a)
{
	//printf("Enter the character : ");
	//scanf("%c",&a);
	if(top+1 == N)
	{
		printf("The stack is full");
	}
	else
	{
		top++;
		stack[top] = a;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{
		printf("%c",stack[top]);
		top--;
	}
}
void main()
{
	char a;
	push('r');
	push('o');
	push('s');
	push('e');
	pop();
	pop();
	pop();
}
