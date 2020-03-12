#include "HourlyEmployee.h"
//HourlyEmployee.cpp
#include "Employee.h"
#include <iostream>

using namespace std;

HourlyEmployee::HourlyEmployee(int Id, const string& first, const string& last, const char& middle, int department, double hourly, double hours, double overtime)
	:Employee(Id, first, last, middle, department) {
	
	hourlyRate = hourly;
	hoursWorked= hours;
	overtimeHoursWorked = overtime;
}
void HourlyEmployee::print()  {
	
	Employee::print();

	cout << "Hours worked: " << hoursWorked << endl <<
		"Overtime hours worked: " << overtimeHoursWorked << endl <<
		"Hourly Rate: " << hourlyRate << endl;
		cout<< "Payment: " << salaryCalculation()<<  endl;
			
}
double HourlyEmployee::salaryCalculation(){
	double temp;
	if ((hoursWorked > 0) && (overtimeHoursWorked == 0)) {
		temp = hourlyRate * hoursWorked;
	}

	else if ((hoursWorked > 0) && (overtimeHoursWorked > 0)) {
		double overtime = hourlyRate * 1.5 * overtimeHoursWorked;
		temp = (hourlyRate * hoursWorked) + overtime;
	}

	else {
		throw std::invalid_argument("hours must be greater than 0");
	}

	return temp;
}

void HourlyEmployee::setHourlyRate(double hourRate) {
	hourlyRate = hourRate;
};

double HourlyEmployee::getHourlyRate() const {
	return hourlyRate;
}

void HourlyEmployee::setHours(double hour) {
	hoursWorked = hour;
}

double HourlyEmployee::getHours() const {
	return hoursWorked;
}
void HourlyEmployee::setOvertime(double over) {
	overtimeHoursWorked = over;
}

double HourlyEmployee::getOvertime() const {
	return overtimeHoursWorked;
}