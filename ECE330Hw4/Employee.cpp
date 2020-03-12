//Employee.cpp
#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(int Id, const string& first, const string& last, const char &middle, int department) {
	employeeId = Id;
	firstName = first;
	lastName = last;
	middleName = middle;
	departmentCode = department;
}
void Employee::print() const {
	cout <<endl<< "ID: " << employeeId << endl <<
		"Name: " << firstName << " " << middleName << " " << lastName << endl <<
		"Department: " << departmentCode << endl;

}

void Employee::setEmployeeId(int Id) {
	employeeId = Id;
}

int Employee::getEmployeeId() const {
	return employeeId;
}

void Employee::setFirstName(const string &name) {
	firstName = name;
}

string Employee::getFirstName() const {
	return firstName;
}

void Employee::setLastName(const string& name) {
	lastName = name;
}

string Employee::getLastName() const {
	return lastName;
}

void Employee::setMiddleName(const char& name) {
	middleName = name;
}

char Employee::getMiddleName() const {
	return middleName;
}

void Employee::setDepartmentCode(int department) {
	departmentCode = department;
}

int Employee::getDepartmentCode()  {
	return departmentCode;
}