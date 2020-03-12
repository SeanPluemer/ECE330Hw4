//HourlyEmployee.h
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string>
#include<iostream>
#include "Employee.h"

using namespace std;
class HourlyEmployee :public Employee{
public:
	HourlyEmployee(int, const string&, const string&, const char&, int, double, double, double =0);

	void setHourlyRate(double);
	double getHourlyRate() const;

	void setHours(double);
	double getHours()const;

	void setOvertime(double);
	double getOvertime()const;

	double salaryCalculation();
	void print() ;
private:
	
	double hourlyRate;
	double hoursWorked;
	double overtimeHoursWorked;
	


};

#endif
