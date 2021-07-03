#include "Queues.h"

QUEUE::QUEUE()
{
	count=0;
	front=rear=-1;
}
void QUEUE::enqueue(int val)
{
	if(isFull())
	{
		cout<<"Queue is full."<<endl;
	}
	else
	{
		if(rear==-1)
		{
			front=0;
		}
		rear=(rear+1)%SIZE;
		queue[rear]=val;
	}
	count++;
}
int QUEUE::deQueue()
{
	int val;
	if(isEmpty())
	{
		cout<<"Queue is Empty."<<endl;
	}
	else
	{
		val=queue[front];
		front=(front+1)%SIZE;
		count--;
		if(count==0)
		{
			rear=front=-1;
		}
	}
	return val;
}
int QUEUE::isEmpty()
{
	return count==0;
}
int QUEUE::isFull()
{
	return count==SIZE;
}
void QUEUE::display()
{
	cout<<"Numbers in Queue are."<<endl;
	for(int i=0;i<SIZE;i++)
	{
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}