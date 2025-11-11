#include "ZellerCngrnce.h"

Zeller::Zeller(int d, int m, int y) : day(d), month(m), year(y) {}

void Zeller::setDay(int d) 
{
    day = d; 
}
void Zeller::setMonth(int m) {
    month = m; 
}
void Zeller::setYear(int y) 
{
    year = y; 
}
int Zeller::getDay() const 
{
    return day; 
}
int Zeller::getMonth() const 
{
    return month; 
}
int Zeller::getYear() const 
{ 
    return year; 
}

void Zeller::adjustMonthYear(int& m, int& y) const 
{
    if (m < 3)
    {
        m += 12;
        y -= 1;
    }
}

string Zeller::getDayOfWeek() const 
{
    int m = month;
    int y = year;
    adjustMonthYear(m, y);

    int K = y % 100;      // Year of the century
    int J = y / 100;      // Zero-based century

    int f = day + 13 * (m + 1) / 5 + K + K / 4 + J / 4 + 5 * J;
    int dayIndex = f % 7;

    switch (dayIndex) 
    {
    case 0: return "Saturday";
    case 1: return "Sunday";
    case 2: return "Monday";
    case 3: return "Tuesday";
    case 4: return "Wednesday";
    case 5: return "Thursday";
    case 6: return "Friday";
    default: return "Unknown";
    }
}

ostream& operator<<(ostream& os, const Zeller& zd) 
{
    os << zd.day << "/" << zd.month << "/" << zd.year << " falls on a " << zd.getDayOfWeek();
    return os;
}