#include <stdio.h>

int main(){
	FILE *fp;	//declare a file pointer. This pointer will point to the file you are dealing with.

	fp = fopen("stack.c","r");
	char c;
	while(1){

		c = fgetc(fp);

		if(feof(fp)){
			break;
		}
		else{
			printf("%c",c);
		}
	}
	return 0;
}

