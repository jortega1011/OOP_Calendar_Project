#include "MyCalendar.h"
#include <iostream>
#include <string>
#include <sstream> // For getLongDateFormat
#include <ctime>   // For setting current date in default constructor
#include <stdexcept> // For invalid_argument

using namespace std;
MyCalendar& MyCalendar::operator++()
{
    int maxDays = daysInMonth(currentMonth, currentYear);
    if (currentDay < maxDays)
    {
        currentDay++;
    }
    else
    {
        currentDay = 1;
        if (currentMonth < 12)
        {
            currentMonth++;
        }
        else
        {
            currentMonth = 1;
            currentYear++;
        }
    }
    return *this;
}

MyCalendar MyCalendar::operator++(int)
{
    MyCalendar temp = *this;
    ++(*this);
    return temp;
}

MyCalendar& MyCalendar::operator--()
{
    if (currentDay > 1)
    {
        currentDay--;
    }
    else 
    {
        if (currentMonth > 1)
        {
            currentMonth--;
        }
        else 
        {
            currentMonth = 12;
            currentYear--;
        }
        currentDay = daysInMonth(currentMonth, currentYear);
    }
    return *this;
}

MyCalendar MyCalendar::operator--(int)
{
    MyCalendar temp = *this;
    --(*this);
    return temp;
}

MyCalendar MyCalendar::operator+(int days) const
{
    MyCalendar temp = *this;
    if (days > 0)
    {
        for (int i = 0; i < days; ++i)
        {
            ++temp;
        }
    }
    else if (days < 0) 
    {
        for (int i = 0; i < -days; ++i)
        {
            --temp;
        }
    }
    return temp;
}

//-------------------------------------------------
// Friend Function
//-------------------------------------------------

ostream& operator<<(ostream& os, const MyCalendar& cal)
{
    os << cal.getMonthName() << " " << cal.currentDay << ", " << cal.currentYear;
    return os;
}
