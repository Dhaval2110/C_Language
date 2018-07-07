//queues...

#include<stdio.h>
int q[5],front,rear;
void enqueue(int data);
void dequeue();
void display();
main()
{
	int op,num;
	for(;;)
	{
		printf("Enter the option\n");
		printf("1]Enqueue 2]Dequeue 3]display 4]exit\n");
		scanf("%d",&op);

		switch(op)
		{
			case 1:if(rear<5)
			       {
				       printf("Enter the data\n");	
				       scanf("%d",&num);
				       enqueue(num);	
			       }
			       else
				       printf("Queue Overflow\n");
			       break;
			case 2:if((rear) && (front<rear))
				       dequeue();
			       else
				       printf("Queue Underflow\n");
			       break;
			case 3:display();
			       break;
			case 4:return;
			default:printf("Invalid Option..\n");
		}
	}
}
void enqueue(int data)
{
	q[rear++]=data;
	printf("%d data inserted in queue\n",data);
}
void dequeue()
{
printf("%d is deleted from queue\n",q[front]);
		q[front++]=0;	

}
void display()
{
	int i;

	if(rear == 0)
	{
		printf("Queue is empty\n");
		return;
	}
	for(i=0;i<rear;i++)
		printf("%d\t",q[i]);
	printf("\n");
}


