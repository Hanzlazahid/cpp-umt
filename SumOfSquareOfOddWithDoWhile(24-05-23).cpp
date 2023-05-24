#include<iostream>
using namespace std;
int main(){
	int firstNum,secondNum,sum=0,square;
	cout<<"Enter first number (number must be less than second number) = ";
	cin>>firstNum;
	cout<<"Enter Second Num = ";
	cin>>secondNum;
	
	do{
			if(firstNum%2!=0){
			square=firstNum*firstNum;
			sum+=square;
		}
		firstNum++;
	}while(firstNum<=secondNum);
	cout<<"The sum is = "<<sum;
}
