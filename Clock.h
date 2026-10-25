//
// Created by ishaan singh on 28/09/26.
//

#ifndef ISOTECHCLOCKS_CLOCK_H
#define ISOTECHCLOCKS_CLOCK_H

class Clock {
public:
    Clock(int initialHour, int initialMinute, int initialSecond);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void setHour(int newHour);
    void setMinute(int newMinute);
    void setSecond(int newSecond);

    void addOneHour();
    void addOneMinute();
    void addOneSecond();

    void displayTime() const;

private:
    int hour;
    int minute;
    int second;
};
#endif //ISOTECHCLOCKS_CLOCK_H
