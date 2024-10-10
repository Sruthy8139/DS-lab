#include<stdio.h>
void main()
{
int stack[50],d,a,i,n,op,top=-1;
void push(int a)
{
if(top==n-1)
{
printf("OVERFLOW");
}
else
{
top++;
stack[top]=a;
printf("\npush operation successful\n");
}
}
		void pop()
		{
		if(top==-1)
		{
		printf("UNDERFLOW");
		}
		else
		{
		d=stack[top];
		top--;
		}
		}
void display()
{
if(top==-1)
{
printf("\nstack is empty\n");
}
else
{
printf("\nstack elements are:\n");
for(i=0;i<=top;i++)
{
printf("%d\n",stack[i]);
}
}
}
printf("\nenter the size of stack:\n");
scanf("%d",&n);  
   do 
		{   
printf("\nSelect any option\n");
printf("\n1.push,\n2.pop,\n3.display");
scanf("%d",&op);
  switch(op)
   {
     case 1:
		     printf("\nEnter the elements to stack:\n");
		     scanf("%d",&a);
		     push(a);
		     break;
		     
     case 2:
		 			pop();
					break;
    case 3:
				display();
				break;
	default:
	       printf("invalid");
	       break;			
}
}while(1);
}









