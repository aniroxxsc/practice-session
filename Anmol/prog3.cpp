#include <iostream>
using namespace std;

#define SIZE 5
class Stack{
	int stack[SIZE];
	int top;

	public:
		Stack(){
			cout<<"Constructor is invoked"<<endl;
			top = -1;
		}

		void push(int a){
			if(top==SIZE-1){
				cout<<"Overflow"<<endl;
			}
			else{
				top++;
				stack[top]=a;
			}
		}

		void pop(){
			if(top == -1){
				cout<<"Underflow"<<endl;
			}
			else{
				cout<<stack[top--]<<" is popped."<<endl;
			}
		}
		void display();
};

void Stack::display(){
	int i;
	if(top == -1){
		cout<<"The stack is empty."<<endl;
	}
	else{
		for(i=0;i<=top;i++){
			cout<<stack[i]<<endl;
		}
	}
}

int main(){
	cout<<"Object is not declared yet"<<endl;
	Stack obj;
	cout<<"Object is declared."<<endl;
	int ch;
	ch = -1;
	
	//cout<<obj.top<<endl;
	while(ch != 0){

		cout<<"1 - Push\n2 - Pop\n3 - Display\n0 - Exit\n\nEnter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				{
					int a;
					cout<<"Enter a number : ";
					cin>>a;
					obj.push(a);
					break;
				}
			case 2:
				{
					obj.pop();
					break;
				}
			case 0:
				{
					break;
				}
			case 3:
				{
					obj.display();
					break;
				}
			default:
				{
					cout<<"Enter a valid number."<<endl;
					break;
				}
		}
	}
	return 0;
}
