#include<iostream>
using namespace std;
int d;
class Stack
{
public:
int s[5],top;
Stack()
	{
		top=-1;
	}
void push(int a)
	{
		if(top>5)
		{
			cout<<"overflow";
		}
		else
			top++;
			s[top]=a;
	}
void pop()
	{
		if(top<0)
		{
			cout<<"underflow";
		}
		else
		{
			cout<<s[top]<<"is been popped";
			top--;
		}
	}
void display()
	{
		for (int x=0;x<=top;x++)
		{
			cout<<s[x]<<endl;
		}
	}

};
int main()
{
    
    Stack obj;
    int c;
    c=-1;
    while(c!=0)
    {cout<<"enter your choice\n0-exit\n1-push\n2-pop\n3-display";
    cin>>c;
    switch(c)
    {
        case 1:{
            cout<<"enter the number";
            cin>>d;
            obj.push(d);
            break;
        }
        case 2:
        {
            obj.pop();
            break;
        }
        case 3:
        {
            obj.display();
            break;
        }
        case 0:
        {
            break;
        }
	break;
        }
    }	return 0;
}
