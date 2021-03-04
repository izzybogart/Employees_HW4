#include <iostream>
#include "HourlyEmployee.hpp"
using namespace std;

HourlyEmployee::HourlyEmployee(doubel hours, double rates, double overtime) : Employee(id, last, first, initial, dept) {
        setHoursWorked(hours);
        setHourlyRate(rates);
        setOvertimeHours(overtime);
}

void HourlyEmployee::setHoursWorked(double hours){
        HoursWorked = hours;
}

void HourlyEmployee::setHourlyRate(double rates) {
        HourlyRate = rates;
}

void HourlyEmployee::setOvertimeHours(double overtime) {
        OvertimeHours = overtime;
}

double HourlyEmployee::getHoursWorked() {
        return HoursWorked;
}

double HourlyEmployee::getHourlyRate() {
        return HourlyRate;
}

double HourlyEmployee::getOvertimeHours() {
        return OvertimeHours;
}

void HourlyEmployee::calcHourlySalary() {
        double yearlySalary = (getHoursWorked() * getHourlyRate()) + (1.5 * getOvertimeHours() * getHourlyRate()) * 12;
        cout<<"Estimated Yearly Salary: "<<fixed<<setprecision(2)<<yearlySalary<<endl;
}

void HourlyEmployee::printHourly() {
        cout<<"Hourly Employee:"<<endl;
        Employee::printEmployee();
        cout<<"Hours Worked This Month: "<<getHoursWorked()<<endl;
        cout<<"Overtime Hours Worked This Month: "<<getOvertimeHours()<<endl;
        cout<<"Hourly Pay rate: "<<getHourlyRate()<<endl;
}