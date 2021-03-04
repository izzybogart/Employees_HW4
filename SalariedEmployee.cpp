#include <iostream>
#include "SalariedEmployee.hpp"
using namespace std;

SalariedEmployee::SalariedEmployee(double salary, int months) {
        setSalary(salary);
        setMonths(months);
}

void SalariedEmployee::setSalary(double salary){
        monthlySalary = salary;
}

void SalariedEmployee::setMonths(int months) {
        monthsWorked = months;
}

double SalariedEmployee::getSalary() const {
        return monthlySalary;
}

int SalariedEmployee::getMonths() const {
        return monthsWorked;
}

void SalariedEmployee::calcSalary() {
        double yearlySalary = getSalary() * ((double)getMonths() * 12);
        cout<<"Yearly Salary Based of of Time Worked: "<<fixed<<setprecision(2)<<yearlySalary<<endl;
}

void SalariedEmployee::printSalary() {
        cout<<"Salaried employee"<<endl;
        cout<<"Monthly Salary: "<<getSalary()<<endl;
        cout<<"Months of the Year Worked: "<<getMonths()<<"/12"<<endl;
}
