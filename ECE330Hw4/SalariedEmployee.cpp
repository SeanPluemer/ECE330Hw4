#include "SalariedEmployee.h"
#include "Employee.h"
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
void SalariedEmployee::print()  {
	Employee::print();
	cout << "Monthly Salary: " << monthlySalary;
}