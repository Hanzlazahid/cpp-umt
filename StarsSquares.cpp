#include<iostream>
using namespace std;

int square(int a){
	for (int i=1; i<=a; i++){
		for(int j=a;j>0;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	int a;
	cout<<"Enter square = ";
	cin>>a;
	square(a);
}

