#include <iostream>
using namespace std;
int main() {
    char input;
    cout<<"Enter a character, to exit input press 1 = ";
    cin>>input;
    while(input!='1'){
        switch(input){
        case 'a':
        cout<<input<<" is a vowel"<<endl;
        break;
        case 'e':
        cout<<input<<" is a vowel"<<endl;
        break;
        case 'i':
        cout<<input<<" is a vowel"<<endl;
        break;
        case 'o':
        cout<<input<<" is a vowel"<<endl;
        break;
        case 'u':
        cout<<input<<" is a vowel"<<endl;
        break;
        default:
        cout<<input<<" is not a vowel"<<endl;
        break;
    }
    cout<<"Enter a character, to exit input press 1 = ";
    cin>>input;
    }
}