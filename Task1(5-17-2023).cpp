#include <iostream>
using namespace std;
int main() {
    int a,b,c,avg;
    char decide;
    do{
        cout<<"Enter number 1 = ";
        cin>>a;
        cout<<"Enter number 2 = ";
        cin>>b;
        cout<<"Enter number 3 = ";
        cin>>c;
        avg=(a+b+c)/3;
        cout<<"Average is "<<avg<<endl;
        cout<<"Calculate again? (y/n) = ";
        cin>>decide;
    }while(decide=='y');
}
