//Employee.H
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
	Employee(int, const string&, const string&, const char&, int);

	void setEmployeeId(int);
	int getEmployeeId() const;
	
	void setFirstName(const string&);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setMiddleName(const char&);
	char getMiddleName() const;

	
	void setDepartmentCode(int);
	int getDepartmentCode();

	void print() const;

private:
	string firstName;
	string lastName;
	int employeeId;
	int departmentCode;
	char middleName;
};

#endif
