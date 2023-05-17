#include <iostream>
using namespace std;
int main() {
    int chance=1;
    char character='v',guess;
    do{
        cout<<"Guess the character = ";
        cin>>guess;
        if(guess==character){
            cout<<"You guessed right";
            chance=6;
        }else{
            chance++;
            if(chance==6){
                cout<<"Out of chances! Try again.";
            }
        }
    }while(chance<=5);
}