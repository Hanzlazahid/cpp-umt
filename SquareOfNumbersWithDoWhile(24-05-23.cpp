#include<iostream>
using namespace std;
int main(){
	int num1=1,num2=10,squares=0;
	do{
			squares=num1*num1;
		cout<<"The square of "<<num1<<" is "<<squares<<endl;
		num1++;
	}while(num1<=num2);
}

