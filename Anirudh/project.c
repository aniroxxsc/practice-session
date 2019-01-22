#include<stdio.h>
char s[100];
int top=-1;
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
		char c,d;
		filepointer=fopen("argv[1]","r");
		tempointer=fopen("argv[1]","w");
		while(1)
		{
			c=fgetc(filepointer);
                	d=fputc(tempointer);
			fputc(c);
				if (c=='{')
				{
					push({);
					for(int x=0;x<=top;x++)
					{
						fputc(\t);
					}
				}
		}
		fclose();

				
	}
	return 0;
}
