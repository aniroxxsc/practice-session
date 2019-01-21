#include<stdio.h>
char s[100],top;
top=-1;
void push(char a)
{
	{
		top++;
		s[top]=a;
	}

}
void pop()
{
	if(top>-1)
	{
		top--;
	}
}
int main()
{
	
}
