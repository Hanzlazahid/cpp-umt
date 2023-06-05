#include<iostream>
using namespace std;
int main(){
	int terms,product=1;
	cout<<"Enter the number of terms = ";
	cin>>terms;
	for(int i=1;i<=terms;i++){
		product*=i;
	}
	cout<<product;
}
