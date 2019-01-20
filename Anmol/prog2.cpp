#include <iostream>
using namespace std;

class Student{
	
	public:
	int roll;
	char name[80];

	Student(){
		roll = 0;
	}

	
};

int main(){

	Student obj;
	cout<<obj.roll<<endl;
	return 0;
}
