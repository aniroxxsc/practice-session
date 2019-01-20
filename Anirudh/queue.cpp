#include<iostream>
using namespace std;
#define SIZE 5
class Queue
{	
	public:
	int q[SIZE];
	int front,rear;
	Queue()
	{
		front=-1;
		rear=-1;
	}
	public:
	void push(int a)
	{
		if(rear>=SIZE)
		{
			cout<<"overflow"<<endl;
		}
		else if	(front==-1 && rear==-1)
		{
			front++;
			rear++;
			q[rear]=a;
		}
		else
		{
			rear++;
			q[rear]=a;
		}
	}
	void pop()
	{
		if (front+=-1 || front>rear)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			front++;
		}
	}
	void display()
	{
		for(int x=front;x<=rear;x++)
		{
			cout<<q[x]<<endl;
		}
	}
};
int main()
{
	Queue obj;
	int c,d;
	cout<<"enter your choice\n0-exit\n1-push\n2-pop\n3-display";
	cin>>c;
	switch(c)
	{
		case 1:{
			cout<<"enter the number";
			cin>> d;
			push(d);
			break;
			}
		case 2:
			{
			pop();
			break;
			}
		case 3:
			{
			display();
			break;
			}
		case 0:
			{
			break;
			}
	}
	return 0;
}
