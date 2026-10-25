#include <iostream>
#include "Clock.h"
using namespace std;

// Asks for the starting time and builds the clock
Clock createClockFromUser() {
    int hour;
    int minute;
    int second;

    cout << "Enter hour (0-23): ";
    cin >> hour;
    cout << "Enter minute (0-59): ";
    cin >> minute;
    cout << "Enter second (0-59): ";
    cin >> second;

    return Clock(hour, minute, second);
}

// Prints the menu options
void displayMenu() {
    cout << endl;
    cout << "1) Add Hour" << endl;
    cout << "2) Add Minute" << endl;
    cout << "3) Add Second" << endl;
    cout << "4) Exit" << endl;
    cout << "Enter choice: ";
}

// Shows the menu and handles choices until the user exits
void runMenu(Clock& userClock) {
    int choice = 0;

    while (choice != 4) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            userClock.addOneHour();
        } else if (choice == 2) {
            userClock.addOneMinute();
        } else if (choice == 3) {
            userClock.addOneSecond();
        }

        if (choice >= 1 && choice <= 3) {
            userClock.displayTime();   // show both clocks after each change
        }
    }
}

int main() {
    Clock userClock = createClockFromUser();
    userClock.displayTime();
    runMenu(userClock);
    return 0;
}