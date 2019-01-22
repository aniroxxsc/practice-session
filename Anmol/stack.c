#include <stdio.h>
#define SIZE 100
int top=-1;
char stack[SIZE];

void push(char a)
{

	stack[++top]=a;

}

void pop()
{
	if(top!=-1)
	{
		stack[top--];
	}
}

int main(int argc,char *argv[]){
	if(argc==1)
	{
		printf("enter the name of the file\n");
	}
	else{
		FILE *filePointer,*tempPointer;
		int i;
		char c,d;
		filePointer=fopen("argv[1]","r");
		tempPointer=fopen("argv[1]","w");
		while(1)
		{
		        c=fgetc(filePointer);
                        d=fputc(tempPointer);
			fputc(c)
			if(c=='{')
			{
				push({);
					for(int x=0;x<=top;x++)
					{
						fputc(\t);
					}
			}
		}
		
	}
		fclose();
	
	}
        return 0;
}
