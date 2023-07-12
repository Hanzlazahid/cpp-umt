#include<iostream>
using namespace std;
int main(){
	int numbers[5]={};
	int term1,term2;
	for(int i=0;i<sizeof(numbers)/sizeof(int);i++){
		cout<<"Enter array element number "<<i<<" = ";
		cin>>numbers[i];
	}
	
	cout<<"The Largest value is:"<<endl;
	int largest=numbers[0];
	for(int i=0;i<sizeof(numbers)/sizeof(int);i++){
		if(numbers[i]>largest){
			largest=numbers[i];
		}
	}
	cout<<largest;
	
}

