#include<iostream>
using namespace std;
#define SIZE 5
class Queue
{	Queue()
	int q[SIZE],rear,front;
	rear=-1;
	front=-1;
	public:
	void push(int a)
		{
		if (rear=-1 && front=-1)
			{rear=0;
			 front=0;
			q[rear]=a;
			}
		
		else if(rear>=SIZE-1)
			{
			cout>>"overflow";
			}
		else
			{
			rear++;
			q[rear]=a;
			}
		}
	void pop()
		{
		 if (front==-1 || front>rear)
			{
				cout>>"queue underflown";
			}
		else
			{
				cout>>q[front]>>"is been popped"
				front++;
			}
		}
	void display()
	{
		for(int x=front;x<=rear;x++)
		{
			cout>>"q[x]";
		}
	}
}
int main()
{
	Queue obj;
	return 0;

}

