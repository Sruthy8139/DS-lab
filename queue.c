#include<stdio.h>
void enqueue();
void dequeue();
void display();
int q[50],size,rear=-1,front=-1,op;
void main()
{
printf("Enter the size of queue:\t");
scanf("%d",&size);
do
{
printf("\n1.Enqueue,\n2.Dequeue,\n3.Display,\n4.Exit\n");
printf("Enter your choice:\t");
scanf("%d",&op);
   switch(op)
    {
		   case 1:
				   enqueue();
				   break;
				   
		   case 2:
			 			dequeue();
						break;
		   case 3:
					display();
					break;

		   default:
			      printf("...Exiting...");
			     break;			
}
}while(op<4);
}
void enqueue()
{
int item;
if( rear==size-1)
{
printf("\n Queue is full");
}
else
{
printf("Enter the element to be inserted:\t");
scanf("%d",&item);
if((rear==-1) && (front==-1))
{
front=0;
}
rear=rear+1;
q[rear]=item;
printf("Enqueue successful");
}
}
void dequeue()
{
int i;
if(front==-1)
{
printf("\n Queue is empty");
}
else
{
i=q[front];
if(rear==front)
{
rear=-1;
front=-1;
}
else
{
front=front+1;
}
display();
}
}
void display()
{
int j;
if((rear==-1) && (front==-1))
{
printf("\n queue is empty");
}
else
{
printf("\n The queue is :\t");
for(j=front;j<=rear;j++)
{
printf("%d\t",q[j]);
}
}
}
















