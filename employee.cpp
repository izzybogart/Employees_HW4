/* employee.cpp*/


#include <iostream>
#include <iomanip>


#include <string>


#include "employee.h"

using namespace std;

// constructor

Employee::Employee(long id, const string &last, const string &first, const string &initial,
		   int dept)
{
  myIdNum = id;
  myLastName = last;
  myFirstName = first;
  myMiddleInitial = initial;
  myDeptCode = dept;
}

// Accessor function defintions

void Employee::setIdNum (const long  id)
{
  myIdNum = id;
}

long Employee:: getIdNum () const				// get id number
{
  return myIdNum;
}


void Employee:: setLastName (const string &last)	// set last name
{
  myLastName = last;
}


string Employee:: getLastName () const			// return last name
{
  return myLastName;
}
 
 
void Employee:: setFirstName (const string &first)	// set first name
{
  myFirstName = first;
}


string Employee:: getFirstName () const			// return first name
{
  return myFirstName;
}


void Employee:: setMiddleInitial (const string &last)	// set middle initial
{
  myMiddleInitial = last;
}


string Employee:: getMiddleInitial () const		// return middle initial
{
  return myMiddleInitial;
}


void Employee::setDeptCode (const int dc)		// set department code
{
  myDeptCode = dc;
}


int Employee:: getDeptCode () const				// get department code
{
  return myDeptCode;
}


void Employee:: printEmployee ()			// print Employee information
{
  cout << endl;
  cout << "Employee ID Number: " << getIdNum() << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
}

HourlyEmployee::HourlyEmployee(float hours, float rates, float overtime){
        HoursWorked = hours;
        HourlyRate = rates;
        OvertimeHours = overtime;
}

void HourlyEmployee::setHoursWorked(float hours) {
        HoursWorked = hours;
}

void HourlyEmployee::setHourlyRate(float rates){
        HourlyRate = rates;
}

void HourlyEmployee::setOvertimeHours(float overtime){
        OvertimeHours = overtime;
}

float HourlyEmployee::getHoursWorked() const {
        return HoursWorked;
}

float HourlyEmployee::getHourlyRate() const {
        return HourlyRate;
}

float HourlyEmployee::getOvertimeHours() const {
        return OvertimeHours;
}

void HourlyEmployee::calcHourlySalary(float hours, float rates, float overtime){
        float yearlySalary = (hours*rates) +(1.5*rates*overtime);
        cout<<"Estimated Yearly Salary: "<<fixed<<setprecision(2)<<yearlySalary<<endl;
}

void HourlyEmployee::printHourly(){
        cout<<"Hours Worked this Month: "<<getHoursWorked()<<endl;
        cout<<"Overtime Hours Worked this Month: "<<getOvertimeHours()<<endl;
        cout<<"Hourly Rate: "<<getHourlyRates()<<endl;
}
