#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>

using namespace std;

class Employee
{
public:
  Employee(long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
  
  void setIdNum (const long );			// set id number
  long getIdNum () const;				// get id number
  void setLastName (const string &);	// set last name
  string getLastName () const;			// return last name
  void setFirstName (const string &);	// set first name
  string getFirstName () const;			// return first name
  void setMiddleInitial (const string &);	// set middle initial
  string getMiddleInitial () const;		// return set middle initial
  void setDeptCode(const int);			// set department code
  int getDeptCode () const;				// get department code
  void printEmployee ();				// print Employee information
 
  
  
private:
  long  myIdNum;			//Employee id number
  string myLastName;		//Employee last name
  string myFirstName;		//Employee first name
  string myMiddleInitial;	//Employee middle intial
  int myDeptCode;			//Department code
};

//Added Code
class SalariedEmployee : public Employee {
        public:
                SalariedEmployee(double salary);        //constructor

                void setSalary(double salary);          //set salary
                long getSalary();                       //get salary
                double calSalary(double salary);        //calculate salary
                void printSalary();                     //print salary information
        private:
                double monthlySalary;
};

class HourlyEmployee : public Employee {
        public:
                HourlyEmployee(int hours, double rates, int overtime);  //constructor

                void setHoursWorked(int hours);
                int getHoursWorked();
                void setHourlyRate(double rates);
                double getHourlyRate();
                void setOvertimeHours(int overtime);
                int getOvertimeHours();
                int calcHourlySalary(int hours, int rate, int overtime);
        private:
                int HoursWorked;
                double HourlyRate;
                int OvertimeHours;
};

#endif
