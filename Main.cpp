// Name: Jacob Ortega
// Date: 10/26/2025
// Description: CMPR121 - Exam 2 - Calendar 2
#include<iostream>
#include"input.h"
#include"MyScheduleDay.h"
#include"MyScheduleDate.h"
#include"MyUnit.h"
using namespace std;

void currentYear();
void setCurrentYear();

int main()
{
	system("cls");
	cout << "\n\tMPR121 Exam2: Calendar - Object Oriented Programming (OOP) by Jacob Ortega (10/2/2025)"
		<< "\n\t" << string(80, char(205))
		<< "\n\tA. Set Current Year"
		<< "\n\tB. Set Current Month"
		<< "\n\tC. Set Current Day"
		<< "\n\tD. Set Current Calendar"
		<< "\n\tE. Schedule and Report Dates"
		<< "\n\tF. Sync Current Calendar from system's current date"
		<< "\n\t" << string(80, char(196))
		<< "\n\t1. Save Current Calendar to binary file"
		<< "\n\t2. Restore Current Calendar from binary file"
		<< "\n\t" << string(80, char(196))
		<< "\n\tX. Quit"
		<< "\n\t" << string(80, char(205));
	char choice = toupper(inputChar("\n\tOption: ", static_cast<string>("ABCDEFX")));
	switch (choice)
	{
	case 'A': break;
	case 'B': break;
	case 'C': break;
	case 'D': break;
	case 'E': break;
	case 'F': break;
	case 'X': exit(0);
	}
	system("pause");
}

void currentYear()
{
	system("cls");
	cout << "\n\tCurrent Year: 2025 (non-leap)";

	cout << "\n\tCalendar - Current Year Menu"
		<< "\n\t" << string(80, char(205))
		<< "\n\t1. Set current year"
		<< "\n\t" << string(80, char(196))
		<< "\n\t0. exit"
		<< "\n\t" << string(80, char(205));
	int choice = inputInteger("\n\tOption: ",0 ,1);
	switch (choice)
	{
	case 1:
		setCurrentYear(); break;
	case 0:
		return;
	}

}

void setCurrentYear()
{
	
}