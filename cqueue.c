#include<stdio.h>
void enqueue();
void dequeue();
void display();
int a[50],size,front=-1,rear=-1;
int main()
{
int item,op;
printf("enter the size of the queue:\t");
scanf("%d",&size);
printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
do
{
printf("\nenter the option:\t");
scanf("%d",&op);
switch(op)
{
case 1:		 	printf("enter the item to be inserted:\t");
						scanf("%d",&item);
				   	enqueue(item);
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
}while(op!=4);
return 0;
}
void enqueue(int item)
{
	if((rear+1)%size==front)
printf("\n Queue is full , insertion is not possible");
else if(rear==-1)
{
front=0;
rear=0;
a[rear]=item;
}
else
{
rear=(rear+1)%size;
a[rear]=item;
}
printf("Enqueue successful");
}
void dequeue()
{
if(front==-1)
printf("\n Queue is empty");
else if(front==rear)
{
printf("deleted item is :\t%d",a[front]);
front==-1;
rear==-1;
}
else
{
printf("deleted item is :%d",a[front]);
front=(front+1)%size;
}
}
void display()
{
int i;
if(front==-1)
{
printf("\n queue is empty");
}
else
{
for(i=front;i!=rear;i=(i+1)%size)
{
printf("%d\t",a[i]);
}
printf("%d\t",a[i]);
}
}














