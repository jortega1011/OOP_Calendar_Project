#pragma once
#include "MyUnit.h"
#include <iostream>
using namespace std;

class MyScheduleDay : public MyUnit
{
private:
    char type;

public:
    // Constructor
    MyScheduleDay();

    // Setter
    void setType(char t);

    // Getter
    char getType() const;

    // Friend print function
    friend ostream& operator<<(ostream& out, const MyScheduleDay& obj);
};