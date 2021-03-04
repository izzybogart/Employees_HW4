#ifndef SALARIEDEMPLOYEE
#define SALARIEDEMPLOYEE

#include <iostream>
#include <iomanip>
#include <string>
#include "employee.hpp"

class SalariedEmployee : public Employee {
        public:
                SalariedEmployee(double salary, int months);    //constructor
                void setSalary(double salary);                  //set salalry
                void setMonths(int months);                     //set months worked
                double getSalary() const;                       //get salary
                int getMonths() const;                          //get months worked
                void calcSalary();
                void printSalary();

        private:
                double monthlySalary;
                int monthsWorked;
};

#endif

