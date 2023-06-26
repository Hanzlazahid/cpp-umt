//Write a function that takes the time as three integer arguments (for hours, minutes and seconds), and returns 
//the number of seconds since the last time the clock “struck 12.” Use this function to calculate the amount of 
//time in seconds between two times, both of which are within one 12-hour cycle of the clock



#include <iostream>
using namespace std;

int SecondsSinceLastStrike(int hours, int minutes, int seconds) {
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return 12 * 3600 - totalSeconds;
}

int TimeDifferenceInSeconds(int hours1, int minutes1, int seconds1, int hours2, int minutes2, int seconds2) {
    int secondsSinceLastStrike1 = SecondsSinceLastStrike(hours1, minutes1, seconds1);
    int secondsSinceLastStrike2 = SecondsSinceLastStrike(hours2, minutes2, seconds2);
    int difference = secondsSinceLastStrike2 - secondsSinceLastStrike1;
    if (difference < 0){
    	difference += 12 * 3600;
	}
    return difference;
}

int main() {
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;
    cout << "Enter the first time (hours minutes seconds): ";
    cin >> hours1 >> minutes1 >> seconds1;
    cout << "Enter the second time (hours minutes seconds): ";
    cin >> hours2 >> minutes2 >> seconds2;
    int timeDifference = TimeDifferenceInSeconds(hours1, minutes1, seconds1, hours2, minutes2, seconds2);
    cout << "Time difference in seconds: " << timeDifference << endl;
}

