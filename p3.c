#include<stdio.h>
#define MAXSIZE 5

int stack[MAXSIZE];
int top=-1;

void push();
void pop();
void display();
int palindrome();

void main()
{
	int choice;
	while(1)
	{
	   printf("STACK OPERATION\n");
	   printf("\t1.push");
	   printf("\t2.pop");
	   printf("\t3.display");
	   printf("\t4.palindrome");
	   printf("\t5.exit");
	   printf("\nEnter your choice:");
	   scanf("%d",&choice);
	   switch(choice)
	   {
	  	case 1:push();
		       break;
		case 2:pop();
		       break;
		case 3:display();
			break;
		case 4:if(palindrome()==0)
			printf("\nStack has palindrome content\n");
		       else
			printf("\nStack has non-palindrome content\n");
		       break;
		case 5:return;
		default:printf("\nEnter a valid choice");
	  }
	}
}
void push()
{
	int c;
	if(top==(MAXSIZE-1))
	{
	  printf("\nStack Overflow\n");
		return;
	}
	else
	{
	  printf("Enter the element to be pushed\n");
	  scanf("%d",&c);
	  stack[++top]=c;
	}
	return;
}
void pop()
{
	if(top==-1)
	{
	 printf("\nStack underflow\n");
	 return;
	}
	else
	{
	printf("poped element is =%d\n",stack[top--]);
   	}
}
void display()
{
	int i;
	if(top==-1)
	{
	  printf("\nStack underflow\n");
	  return;
	}
	else
	{
	 printf("\nThe elements of stack are\n");
	 for(i=top;i>=0;i--)
	printf("%d\n",stack[i]);
	}
}
int palindrome()
{
	int rev[MAXSIZE];
	int i,j;
	for(i=0;i<=top;i++)
	rev[i]=stack[i];
	 for(i=0,j=top;i<=top;i++,j--)
	{
		if(rev[i]==stack[j])
		   continue;
		else
			return-1;
	}
	return 0;
}








