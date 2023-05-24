#include<iostream>
using namespace std;
int main(){
	int term1=0,term2=1,sum,i=1,term;
	cout<<"Enter number of terms = ";
	cin>>term;
	while(i<=term){
		sum=term1+term2;
        cout<<sum<<",";
		term1=term2;
		term2=sum;
		i++;
	}
	
}
