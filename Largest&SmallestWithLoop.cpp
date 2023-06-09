#include <iostream>
using namespace std;

int main() {
    int number;
    int largest;
    int smallest;
    bool firstNumber = true;

    while (true) {
        cout << "Enter an integer (-99 to end): ";
        cin >> number;

        if (number == -99) {
            break;
        }

        if (firstNumber) {
            largest = number;
            smallest = number;
            firstNumber = false;
        } else {
            if (number > largest) {
                largest = number;
            }

            if (number < smallest) {
                smallest = number;
            }
        }
    }

    if (!firstNumber) {
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}

