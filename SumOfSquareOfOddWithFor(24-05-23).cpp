#include<iostream>
using namespace std;
int main(){
	int firstNum,secondNum,sum=0,square;
	cout<<"Enter first number (number must be less than second number) = ";
	cin>>firstNum;
	cout<<"Enter Second Num = ";
	cin>>secondNum;
	
	for(int i=firstNum; i<=secondNum;i++){
			if(i%2!=0){
			square=i*i;
			sum+=square;
		}
	}
	cout<<"The sum is = "<<sum;
}
