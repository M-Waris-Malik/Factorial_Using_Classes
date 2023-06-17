#include <iostream>
using namespace std;

class Factorial{
	public:
		calculate(int num){
			if(num==0 || num == 1){
				return 1;
			}
			
			return num * calculate(num-1);
		}
};

int main(){
	while(true){
		int choice;
	cout<<"Enter 1 for factorial or 0 for exit ";
	cin>>choice;
	
	if(choice==1){
	
	int number;
	cout<<"Enter number: ";
	cin>>number;
	Factorial fact;
cout<<"Factorial of "<<number<<" is: "<<fact.calculate(number)<<endl;
}
else if(choice==0){
	exit(0);
}	
}
}
