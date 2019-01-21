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
int main(int argc,char *argv[])
{
	char data[255];
	if(argc==1)
		printf("enter a file ");
	else 
	{
		FILE *filepointer,*tempointer;
		int i;

		filepointer=fopen("argv[1]",rt);
		c=fgets(argv[1])
		while(1)
		{

		}

				{
					if(tempointer=="{";
							push(tempointer);
				}
		fclose();

				
	}
	return 0;
}
