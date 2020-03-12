#pragma once
#ifndef Salaried_H
#define SALARIED_H
#include "Employee.h"
#include <string>
using namespace std;

class SalariedEmployee
{
public:
	SalariedEmployee(int, const string&, const string&, const char&, int, int);
	void setEmployeeId(int);
	int getEmployeeId();

	void setFirstName(const string&);
	string getFirstName() const;

	void setMiddleName(const string&);
	string getLastName() const;

	void setMiddleName(const char&);
	string getMiddleName() const;


	void setDepartmentCode(int);
	int getDepartmentCode();

	void setMonthlySalary(int);
	int getMonthlySalary();

	void print();
private:
	string firstName;
	string lastName;
	int employeeId;
	int departmentCode;
	int monthlySalary;
	char middleName;
};
#endif

