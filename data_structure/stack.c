#include<stdio.h>
int stk[5],ind_var=0;
void push(int data);
void pop();
void display();
main()
{
	int op,num;
	for(;;)
	{
		printf("Enter the option\n");
		printf("1]push 2]pop 3]display 4]exit\n");
		scanf("%d",&op);

		switch(op)
		{
			case 1:if(ind_var<5)
			       {
				       printf("Enter the data\n");	
				       scanf("%d",&num);
				       push(num);	
			       }
			       else
				       printf("Stack Overflow\n");
			       break;
			case 2:if(ind_var>0)
				       pop();
			       else
				       printf("Stack Underflow\n");
			       break;
			case 3:display();
			       break;
			case 4:return;
			default:printf("Invalid Option..\n");

		}
	}
}
void push(int data)
{
	stk[ind_var++]=data;
}
void pop()
{
	printf("%d is popped\n",stk[--ind_var]);
	stk[ind_var]=0;
}
void display()
{
	int i;
	if(ind_var == 0)
	{
		printf("Stack is empty\n");
		return;
	}
	for(i=0;i<ind_var;i++)
		printf("%d\t",stk[i]);
	printf("\n");
}


