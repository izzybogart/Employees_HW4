/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.hpp"
#include "SalariedEmployee.hpp"
#include "HourlyEmployee.hpp"

using namespace std;

int main() {
        //SalariedEmployee e1 (6000, 12);
        Employee e1 (001, "Jones", "Booker", "T", 22);
        //SalariedEmployee e2 (3714, 8 );
        Employee e2 (002, "Hendrix", "Jimi", "NMI ", 14);
        //HourlyEmployee e3 (172, 12.50, 21.50);
        Employee e3 (003, "Morrison", "Jim", "D", 03);
        //HourlyEmployee e4 (150.50, 12.50, 0);
        Employee e4 (004, "Hadox", "Callie", "N", 03);

        e1.printEmployee();
/*      e1.printSalary();
        e1.calcSalary();
        e2.printSalary();
        e2.calcSalary();
        e3.printHourly();
        e3.calcHourlySalary();
        e4.printHourly();
        e4.calcHourlySalary();
*/
        return 0;
