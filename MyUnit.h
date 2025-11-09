#pragma once
#include <iostream>
#include <cstring>   // for strcpy
using namespace std;

class MyUnit
{
private:
    unsigned short value;
    char description[100];

public:
    // Constructor
    MyUnit();

    // Setters
    void setValue(int v);
    void setDescription(string s);

    // Getters
    int getValue() const;
    string getDescription() const;

    // Friend function for printing
    friend ostream& operator<<(ostream& out, const MyUnit& obj);
};