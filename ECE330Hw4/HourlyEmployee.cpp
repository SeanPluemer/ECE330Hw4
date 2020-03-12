#include "HourlyEmployee.h"

#include <iostream>

using namespace std;

HourlyEmployee::HourlyEmployee(int Id, const string& first, const string& last, const char& middle, int department, int hourlyRate, int hours, int overtime=0) {
	employeeId = Id;
	//cout << Id;
	firstName = first;
	lastName = last;
	middleName = middle;
	departmentCode = department;
	hoursWorked= hours;
	overtimeHoursWorked = overtime;
}
void HourlyEmployee::print() const {
	cout << " ID: " << employeeId;
	cout << "Hours worked: " << hoursWorked;
}