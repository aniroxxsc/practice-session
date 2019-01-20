#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *head,*temp;
class Link
{
	public:
	Link()
	{
		node->data=NULL;
		node->next=NULL;
	}
	void push(int a)
	{
		
		if (head==NULL)
		{
		temp=(struct node*)malloc(sizeof(struct node));
		head=temp;
		temp->data=a;
		temp->next=NULL;
		}
		else
		{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=a;
		temp->next=NULL;
		head->next=temp;
		}
	}

};
int main()
{
    Link obj1,obj2;
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
