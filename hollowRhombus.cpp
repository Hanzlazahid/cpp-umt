#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number of rows = ";
	cin>>num;
	int space=num;
	for(int i=1;i<=num;i++){
		for(int j=space;j>0;j--){
			cout<<" ";
		}
		for(int y=1;y<=num;y++){
			if(i==1 or i==num){
				cout<<"*";
			}else if(y==1 or y==num){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
		space--;
	}
}
