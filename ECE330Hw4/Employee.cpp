#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(int Id, const string& first, const string& last, const char &middle, int department) {
	employeeId = Id;
	//cout << Id;
	firstName = first;
	lastName = last;
	middleName = middle;
	departmentCode = department;
}
void Employee::print() const {
	cout << " ID: " << employeeId <<
		" Name: " << firstName << " " << middleName << " " << lastName << endl <<
		"Department: " << departmentCode << endl;

}