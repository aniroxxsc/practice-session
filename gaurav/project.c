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


int main(){
	return 0;
}