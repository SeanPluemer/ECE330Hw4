//SalariedEmployee.cpp
#include "SalariedEmployee.h"
#include "Employee.h"
#include <iostream>

using namespace std;

SalariedEmployee::SalariedEmployee(int Id, const string& first, const string& last, const char& middle, int department, double salary, double fraction )
	:Employee(Id,first,last,middle,department){

	monthlySalary = salary / 12;
	fractionWorked = fraction;
}
void SalariedEmployee::print()  {
	Employee::print();
	cout << "Fraction worked: " << fractionWorked << endl;
	cout << "Monthly Salary: " << calculateSalary() <<endl;
}
double SalariedEmployee::calculateSalary() {

	double temp = monthlySalary * fractionWorked;
	return temp;

}


void SalariedEmployee::setMonthlySalary(double Rate) {
	monthlySalary = Rate;
}

double SalariedEmployee::getMonthlySalary() const {
	return monthlySalary;
}

