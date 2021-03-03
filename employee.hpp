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
                SalariedEmployee(double salary, int months);                    //constructor

                void setSalary(double salary);                                  //set salary
                void setMonths(int months);                                     //set months of year worked
                double getSalary() const;                                       //get salary
                int getMonths() const;                                       //get months
                void calSalary(double salary, int months);        //calculate salary
                void printSalary();                                             //print salary information
        private:
                double monthlySalary;
                double monthsWorked;
};

class HourlyEmployee : public Employee {
        public:
                HourlyEmployee(float hours, float rates, float overtime);  //constructor

                void setHoursWorked(float hours);
                float getHoursWorked() const;
                void setHourlyRate(double rates);
                float getHourlyRate() const;
                void setOvertimeHours(float overtime);
                float getOvertimeHours() const;
                void calcHourlySalary(float hours, float rates, float overtime);
                void printHourly();
        private:
                float HoursWorked;
                float HourlyRate;
                float OvertimeHours;
};

#endif
