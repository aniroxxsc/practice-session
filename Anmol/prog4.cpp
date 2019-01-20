#include <iostream>
using namespace std;

#define SIZE 5
class Queue{
	int front;
	int rear;
	int queue[SIZE];

	public:
	Queue()
	{
		front=-1;
		rear=-1;

	}

	void insert(int a){

		if((front==-1)&&(rear==-1))
		{
			front=0;
			rear=0;
			queue[rear]=a;
		}
		else if(rear==SIZE-1)
		{
			cout<<"overflow"<<endl;
		}
		else
		{
			queue[rear++]=a;
		}		
	}

	void pop(){
		if((front==-1)&&(rear==-1))
		{
			cout<<"underflow"<<endl;
		}
		else if(front>rear)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			cout<<queue[front]<<"This number is deleted"<<endl;
			front++;
		}

	}
	void display(){
		if(((front==-1)&&(rear==-1))||(front>rear))
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			int i;
			for(i=front;i<=rear;i++){
				cout<<queue[i]<<endl;
			}
		}

	}


};
int main()
{
	return 0;
}
