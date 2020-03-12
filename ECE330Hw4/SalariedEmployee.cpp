#include "SalariedEmployee.h"
#include <iostream>

using namespace std;

SalariedEmployee::SalariedEmployee(int Id, const string& first, const string& last, const char& middle, int department, int salary) {
	employeeId = Id;
	//cout << Id;
	firstName = first;
	lastName = last;
	middleName = middle;
	departmentCode = department;
	monthlySalary = salary / 12;
}
void SalariedEmployee::print() const {
	cout << " ID: " << employeeId;
	cout << "Monthly Salary: " << monthlySalary;
}