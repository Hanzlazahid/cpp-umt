#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number of rows = ";
	cin>>num;
	for(int i=1; i<=num; i++){
		for(int j=1;j<=num;j++){
			if(j==i or j==(num+1)-i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
