#include<iostream>
#include <cstdlib>
using namespace std;

float smallest(float a, float b, float c){
	if(a<b and a<c){
		return a;
	}else if(b<a and b<c){
		return b;
	}else if(c<a and c<b){
		return c;
	}else{
		cout<<"Two or more numbers are equal";
	}
}

int main(){
	float a,b,c;
	cout<<"Enter floating point number 1 = ";
	cin>>a;
	cout<<"Enter floating point number 2 = ";
	cin>>b;
	cout<<"Enter floating point number c = ";
	cin>>c;
	float ans=smallest(a,b,c);
	cout<<ans;
}
