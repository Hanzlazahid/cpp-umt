
// <---------------------TASK 1 ------------------------------->
#include <iostream>
using namespace std;
int main() {
    // Declaring the variables
    int total_amount,discount,payable_amount;
    // Taking input from user
    cout<<"Enter the total amount = ";
    cin>>total_amount;
    // Calculating the discounted price
    if(total_amount>50000){
        discount=total_amount * (20.0/100.0);
        payable_amount=total_amount-discount;
        cout<<"The amount after discount is = "<<payable_amount;
    }else{
        discount=total_amount * (25.0/100.0);
        payable_amount=total_amount-discount;
        cout<<"The amount after discount is = "<<payable_amount;
    }
}

// <-----------------------TASK 2 -------------------------------->


// <------------------METHOD 1---------------------->

#include <iostream>
using namespace std;
int main() {
    // Declaring the variables
    string degree;
    int age,division;
    // Taking input from the user
    cout<<"Enter degree: ";
    cin>>degree;
    cout<<"Enter age = ";
    cin>>age;
    cout<<"Enter division = ";
    cin>>division;
    // Applying Condition
    if(degree=="cs" and age<=30 and division>=70){
        cout<<"The Candidate is eligible for the job";
    }else{
        cout<<"The Candidate is not eligible for the job";
    }
}


// <----------------METHOD 2------------------->

#include <iostream>
using namespace std;
int main() {
    // Declaring the variables
    string degree;
    int age,division;
    // Taking input from the user
    cout<<"Enter degree: ";
    cin>>degree;
    // Applying Condition
    if(degree=="cs"){
        cout<<"Enter age = ";
        cin>>age;
        cout<<"Enter division = ";
        cin>>division;
        if(age<=30 and division>=70){
        cout<<"The Candidate is eligible for the job";
        }else{
            cout<<"The candidate is not eligible due to his age or division";
        }
    }else{
        cout<<"The Candidate is not eligible for the job because his degree is not computer science";
    }
}



