#pragma once
#include <string>
using namespace std;

class Zeller 
{
private:
    int day;
    int month;
    int year;

    // Helper function to adjust month and year
    void adjustMonthYear(int& m, int& y) const;

public:
    // Constructor
    Zeller(int d, int m, int y);

    // Setter functions
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    // Getter functions
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Function to calculate day of the week
    string getDayOfWeek() const;

    friend ostream& operator<<(ostream& os, const Zeller& zd);
};
