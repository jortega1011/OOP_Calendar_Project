#pragma once
#include "MyUnit.h"
#include <iostream>
using namespace std;

class MyScheduleYear : public MyUnit
{
private:
    char type;

public:
    // Constructor
    MyScheduleYear();

    // Setter
    void setType(char t);

    // Getter
    char getType() const;

    // Friend print function
    friend ostream& operator<<(ostream& out, const MyScheduleYear& obj);
};