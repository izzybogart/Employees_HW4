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

SalariedEmployee::SalariedEmployee(double salary, int months) {
        monthlySalary = salary;
        monthsWorked = months;
}

void SalariedEmployee::setSalary(double salary){
        monthlySalary = salary;
}

void SalariedEmployee::setMonths(int months){
        monthsWorked = months;
}

double SalariedEmployee::getSalary() const{
        return monthlySalary;
}

int SalariedEmployee::getMonths() const{
        return monthsWorked;
}

void SalariedEmployee::calSalary(double salary, int months){
        double yearlySalary = salary*((double)months/12);
        cout<<"Yearly Salary: "<<fixed<<setprecision(2)<<yearlySalary<<endl;
}

void SalariedEmployee::printSalary(){
        cout<<"Monthly Salary: "<<getSalary()<<endl;
        cout<<"Fraction of the Year Worked: "<<getMonths()<<"/12"<<endl;
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
