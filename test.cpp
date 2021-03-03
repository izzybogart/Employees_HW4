/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.hpp"

using namespace std;

int main() {
        Employee e1 (001, "Jones", "Booker", "T", 22);
        Employee e2 (002, "Hendrix", "Jimi", "NMI ", 14);
        Employee e3 (003, "Morrison", "Jim", "D", 03);
        Employee e4 (004, "Hadox", "Callie", "N", 03);

        SalariedEmployee Jones (6000, 12);
        SalariedEmployee Hendrix (3714, 8);

        HourlyEmployee Morrison (172, 12.50, 21.50);
        HourlyEmployee Hadox (150.5, 12.50, 0);


        e1.printEmployee();
        Jones.printSalary();
        Jones.calSalary(6000, 12);
        e2.printEmployee();
        Hendrix.printSalary();
        Hendrix.calSalary(3714, 8);
        e3.printEmployee();
        Morrison.printHourly();
        Morrison.calcHourlySalary(172, 12.50, 21.50);
        e4.printEmployee();
        Hadox.printHourly();
        Hadox.calcHourlySalary(150.5, 12.50, 0);

}
