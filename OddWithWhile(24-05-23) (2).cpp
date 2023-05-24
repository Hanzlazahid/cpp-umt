#include<iostream>
using namespace std;
int main(){
	int firstNum,secondNum;
	cout<<"Enter first number (number must be less than second number) = ";
	cin>>firstNum;
	cout<<"Enter Second Num = ";
	cin>>secondNum;
	
	while(firstNum<=secondNum){
		if(firstNum%2!=0){
			cout<<firstNum<<endl;
		}
		firstNum++;
	}
}

