#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
	int a=rand()%10+1;
	int b=rand()%10+1;
	int answer;
	
	do{
		cout<<"How much is "<<a<<" * "<<b<<" = "<<endl;;
		cin>>answer;
		if(answer==(a*b)){
			cout<<"You answered right!";
			a=rand()%10+1;
			b=rand()%10+1;
		}else{
			cout<<"Wrong! Try again";
		}
	}while(true);
}
