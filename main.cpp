/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.hpp"
#include "SalariedEmployee.hpp"
#include "HourlyEmployee.hpp"

using namespace std;

int main() {
        SalariedEmployee Jones (6000, 12);
        Employee e1 (001, "Jones", "Booker", "T", 22);
        SalariedEmployee Hendrix (3714, 8 );
        Employee e2 (002, "Hendrix", "Jimi", "NMI ", 14);
        HourlyEmployee Morrison (172, 12.50, 21.50);
        Employee e3 (003, "Morrison", "Jim", "D", 03);
        HourlyEmployee Hadox (150.50, 12.50, 0);
        Employee e4 (004, "Hadox", "Callie", "N", 03);

        e1.printEmployee();
        Jones.printSalary();
        Jones.calcSalary();
        e2.printEmployee();
        Hendrix.printSalary();
        Hendrix.calcSalary();
        e3.printEmployee();
        Morrison.printHourly();
        Morrison.calcHourlySalary();
        e4.printEmployee();
        Hadox.printHourly();
        Hadox.calcHourlySalary();

        return 0;
}
