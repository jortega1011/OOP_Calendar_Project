// Belongs in cpp file, so move over to MyCalendar.cpp
// Gets the number of days in a specific month of a specific year
/* int MyCalendar::daysInMonth(int m, int y) const 
{
    if (m == 2) { // February
        return isLeapYear(y) ? 29 : 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) 
    { // 30-day months
        return 30;
    }
    else 
    { // 31-day months (1, 3, 5, 7, 8, 10, 12)
        return 31;
    }
}

// Checks if a full date (y, m, d) is valid
bool MyCalendar::isValidDate(int y, int m, int d) const 
{
    if (y <= 0 || m < 1 || m > 12 || d < 1) 
    {
        return false;
    }
    if (d > daysInMonth(m, y)) 
    {
        return false;
    }
    return true;
}

// Calculates the day of the week (0=Sunday, 1=Monday, etc.)
// Using Zeller's congruence
int MyCalendar::getDayOfWeekAsInt() const
{
    int d = currentDay;
    int m = currentMonth;
    int y = currentYear;

    // Zeller's algorithm: Jan/Feb are months 13/14 of previous year
    if (m < 3) 
    {
        m += 12;
        y -= 1;
    }

    int k = y % 100; // Year of the century
    int j = y / 100; // Century (e.g., 20 for 2025)

    // The formula
    int h = (d + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    // Convert Zeller's (0=Sat, 1=Sun, ...) to (0=Sun, 1=Mon, ...)
    return (h + 6) % 7;
} */ 
#pragma once 
#include <iostream>
#include <string>
#include "MyScheduleDay.h" // Include the aggregated class
using namespace std;
//-------------------------------------------------
// Aggregate Class Definition
//-------------------------------------------------

class MyCalendar
{
public:
    MyCalendar& operator++();   // Prefix
    MyCalendar operator++(int); // Postfix
    MyCalendar& operator--();   // Prefix
    MyCalendar operator--(int); // Postfix
    MyCalendar operator+(int days) const;

};

