#include<iostream>
using namespace std;

int multiple(int a, int b){
	if(b%a==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int a,b;
	cout<<"Enter two integers, 2nd one should be greater than first"<<endl;
	cout<<"Enter integer 1 = ";
	cin>>a;
	cout<<"Enter integer 2 = ";
	cin>>b;
	int answer=multiple(a,b);
	cout<<answer;
}

