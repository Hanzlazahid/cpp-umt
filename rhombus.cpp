#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number of rows = ";
	cin>>num;
	int space=num;
	for(int i=1; i<=num;i++){
		for(int y=space;y>0;y--){
			cout<<" ";
		}
		for(int j=1;j<=num;j++){
			cout<<"*";
		}
		cout<<endl;
		space--;
	}
}
