#include<iostream>
#include<cmath>
using namespace std;

double hypotenuse(double a, double b){
	double c=sqrt((a*a) + (b*b));
	return c;
} 

int main(){
	double a,b;
	cout<<"Enter value of side 1 = ";
	cin>>a;
	cout<<"Enter value of side 2 = ";
	cin>>b;
	double answer=hypotenuse(a,b);
	cout<<answer;
}

