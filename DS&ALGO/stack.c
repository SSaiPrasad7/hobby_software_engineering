#include<stdio.h>
#include<conio.h>
int size,top,i,x;
int stack[25];
void push()
{
	
if(top==size-1)
	{
		printf("overflow\n");
	}
	
	else
	{
		top=top+1;
		printf("Enter the value of x \n");
		scanf("%d",&x);
		stack[top]=x;	
	}
}
void pop()
{
	if (top<0)
	{
		printf("underflow\n");
	}
	else
	{
		top--;
	}
	
}

void display()
{
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}

void main()
{
	printf("Enter the top value of the stack \n");
	scanf("%d",&top);
	//top=-1;
	top++;
	stack[top]=1;
	top++;
	stack[top]=2;
	int n;
	
	while(1)
	{
	printf("Enter your choices  \n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
				printf("Add the top element\n");
				push();
				break;
			}
		case 2:
			{
				printf("Delete the top element\n");
				pop();
				break;
			}
		case 3:
			{
				printf("Display\n");
				display();
				break;
			}
		case 4:
		{
				printf("Exit Point\n");
				break;
		}
			
	}

}
}
