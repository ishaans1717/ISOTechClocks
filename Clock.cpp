//
// Created by ishaan singh on 28/09/26.
//

#include "Clock.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Sets the time
Clock::Clock(int initialHour, int initialMinute, int initialSecond) : hour(initialHour), minute(initialMinute), second(initialSecond) {}
// getter : return the values
int Clock::getHour() const {
    return hour;
}

int Clock::getMinute() const {
    return minute;
}

int Clock::getSecond() const {
    return second;
}
//setters: sets the values
void Clock::setHour(int newHour) {
    if (newHour >= 0 && newHour <= 23) {
        hour = newHour;
    }
}

void Clock::setMinute(int newMinute) {
    if (newMinute >= 0 && newMinute <= 59) {
        minute = newMinute;
    }
}

void Clock::setSecond(int newSecond) {
    if (newSecond >= 0 && newSecond <= 59) {
        second = newSecond;
    }
}
// Adds one hour also goes back to 0
void Clock::addOneHour() {
    if (getHour() < 23) {
        setHour(getHour() + 1);
    } else {
        setHour(0);
    }
}

// Adds one minute also goes back to 0
void Clock::addOneMinute() {
    if (getMinute() < 59) {
        setMinute(getMinute() + 1);
    } else {
        setMinute(0);
        addOneHour();
    }
}

// Adds one second also goes back to 0
void Clock::addOneSecond() {
    if (getSecond() < 59) {
        setSecond(getSecond() + 1);
    } else {
        setSecond(0);
        addOneMinute();
    }
}

// display's Time inc 12-hour and 24-hour clocks at the same time
void Clock::displayTime() const {
    int clock12hours = hour % 12;
    if (clock12hours == 0) {
        clock12hours = 12;
    }
    string period;
    if (hour < 12) {
        period = "AM";
    } else {
        period = "PM";
    }

    cout << setfill('0');
    cout <<  "12-hour clock: " << setw(2) << clock12hours << ":" << setw(2) << minute << ":" << setw(2) << second
         << " " << period << endl;
    cout << "24-hour clock: " << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}
