#include <iostream>
#include <iomanip>
#include <string>
#include "employee.hpp"

class HourlyEmployee : public Employee {
        public:
                HourlyEmployee(double hours, double rates, double overtime);    //constructor
        //set functions
                void setHoursWorked(double hours);
                void setHourlyRate(double rates);
                void setOvertimeHours(double overtime);
        //get functions
                double getHoursWorked();
                double getHourlyRate();
                double getOvertimeHours();
        //other functions
                void calcHourlySalary();
                void printHourly();

        private:
                double HoursWorked;
                double HourlyRate;
                double OvertimeHours;
};

