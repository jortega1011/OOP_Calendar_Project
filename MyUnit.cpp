#include "MyUnit.h"
#include <cstring>

MyUnit::MyUnit()
{
    value = 0;
    strcpy(description, "");
}

void MyUnit::setValue(int v)
{
    value = static_cast<unsigned short>(v);
}

int MyUnit::getValue() const
{
    return value;
}

void MyUnit::setDescription(string s)
{
    strcpy(description, s.c_str());
}

string MyUnit::getDescription() const
{
    return string(description);
}

ostream& operator<<(ostream& out, const MyUnit& obj)
{
    out << "Value: " << obj.value
        << ", Description: " << obj.description;
    return out;
}