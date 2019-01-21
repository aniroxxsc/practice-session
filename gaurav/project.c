#include <stdio.h>
#include <string.h>

int top = -1;
char stack[100];

void push(char ch){
	if(top==-1){
		top = 0;
		stack[top] = ch;
	}
	else{
		if(top<99){
			top++;
			stack[top] = ch;
		}
	}
}

void pop(){
	if(top>-1){
		top--;
	}
}


int main(int argc,char *argv[]){

	if(argc == 1){
		printf("Please enter the name of the file.\n");
	}
	else{
		FILE *filePointer,*tempPointer;
		int i;
		for(i=0;i<argc;i++){
			printf("%s\n",argv[i]);
		}
	}
	return 0;
}
