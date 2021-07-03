#include"Queues.h"
int main()
{
	QUEUE q;
	for(int i=0;i<SIZE;i++)
	{
		q.enqueue(i);
	}
	for(int i=0;i<SIZE;i++)
	{
		q.deQueue();
	}
		q.display();
		system("pause");
		return 0;

}