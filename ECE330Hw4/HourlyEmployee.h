#pragma once

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string>
using namespace std;
class HourlyEmployee
{
public:
	HourlyEmployee(int, const string&, const string&, const char&, int,int,int, int);
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

	void setHourlyRate(int);
	int getHourlyRate();

	void setHours(int);
	int getHours();

	void setOvertime(int);
	int getOvertime();

	void print() const;
private:
	string firstName;
	string lastName;
	int employeeId;
	int departmentCode;
	int hourlyRate;
	int hoursWorked;
	int overtimeHoursWorked;

	char middleName;
};

#endif
