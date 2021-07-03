#ifndef _QUEUES_H
#define _QUEUES_H
#include<iostream>
using namespace std;
const int SIZE=10;
class QUEUE
{
private:
	int queue[SIZE];
	int front;
	int rear;
	int count;
public:
	QUEUE();
	void enqueue(int);
	int deQueue();
	int isEmpty();
	int isFull();
	void display();
};
#endif