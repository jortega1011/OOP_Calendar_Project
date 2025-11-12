#include "MyScheduleYear.h"


MyScheduleYear::MyScheduleYear()
{
    type = 'U';
}

void MyScheduleYear::setType(char t)
{
    type = t;
}

char MyScheduleYear::getType() const
{
    return type;
}

ostream& operator<<(ostream& out, const MyScheduleYear& obj)
{
    out << "Value: " << obj.getValue()
        << ", Description: " << obj.getDescription()
        << ", Type: " << obj.type;
    return out;
}