//SalariedEmployee.H
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <iostream>
#include "Employee.h"
#include <string>

using namespace std;

class SalariedEmployee :public Employee
{
public:
	SalariedEmployee(int, const string&, const string&, const char&, int, double,double=1);
	
	void setMonthlySalary(double);
	double getMonthlySalary()const;

	double calculateSalary();
	void print();
private:
	double monthlySalary;
	double fractionWorked;

};
#endif

