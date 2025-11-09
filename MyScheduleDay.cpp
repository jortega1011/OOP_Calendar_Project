#include "MyScheduleDay.h"

MyScheduleDay::MyScheduleDay()
{
    type = 'U'; // example default: U = undefined, optional
}

void MyScheduleDay::setType(char t)
{
    type = t;
}

char MyScheduleDay::getType() const
{
    return type;
}

ostream& operator<<(ostream& out, const MyScheduleDay& obj)
{
    out << "Value: " << obj.getValue()
        << ", Description: " << obj.getDescription()
        << ", Type: " << obj.type;
    return out;
}