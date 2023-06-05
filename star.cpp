#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number of rows = ";
	cin>>num;
	int space=num;
	int stars=1;
	for(int i=1;i<=num;i++){
		for(int j=space;j>=0;j--){
			cout<<" ";
		}
		for(int y=1;y<=stars;y++){
			cout<<"*";
		}
		cout<<endl;
		stars+=2;
		space--;
	}
}


