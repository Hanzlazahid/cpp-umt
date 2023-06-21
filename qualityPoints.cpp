#include<iostream>
using namespace std;

int qualityPoints(int avg){
	if(avg>=90 and avg<=100){
		return 4;
	}else if(avg>=80 and avg<=89){
		return 3;
	}else if(avg>=70 and avg<=79){
		return 2;
	}else if(avg>=60 and avg<=69){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int avg;
	cout<<"Enter average = ";
	cin>>avg;
	
	int ans=qualityPoints(avg);
	cout<<ans;
}
