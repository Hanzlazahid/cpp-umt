#include<iostream>
using namespace std;
int main(){
	int a,b,c,great,greater,greatest;
	cout<<"Enter number 1 = ";
	cin>>a;
	cout<<"Enter number 2 = ";
	cin>>b;
	cout<<"Enter number 3 = ";
	cin>>c;
	
	if(a>b and a>c){
		greatest=a;
	}else if(b>a and b>c){
		greatest=b;
	}else if(c>a and c>b){
		greatest=c;
	}
	
	if(a<b and a<c){
		great=a;
	}else if(b<a and b<c){
		great=b;
	}else if(c<a and c<b){
		great=c;
	}
	
    greater=(a+b+c)-(great+greatest);
	cout<<"The Ascending order is "<<great<<","<<greater<<","<<greatest;
}
