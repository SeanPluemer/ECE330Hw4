//Sean Pluemer ECE 330 
//This program demonstrates class inheritance with employees

#include <iostream>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "Employee.h"


using namespace std;

int main() {
	int salary = 100000;
	int hoursWorked = 10;
	int overtimeHoursWorked = 1;
	int hourlyRate = 10;

	Employee baseEmployee(	1, "Sean", "Pluemer",'A', 2500);

	SalariedEmployee fullsalariedEmployee(2, "kyle", "chavez", 'A', 2600, salary);
	SalariedEmployee halfsalariedEmployee(3, "mom", "duck", 'B', 2600, salary,.5);

	HourlyEmployee hourlyEmployee(4, "duck", "daves", 'A', 2200, hourlyRate, hoursWorked);
	HourlyEmployee overhourlyEmployee(5, "duck", "daves", 'A', 2200, hourlyRate, hoursWorked,overtimeHoursWorked);


	baseEmployee.print();
	fullsalariedEmployee.print();
	halfsalariedEmployee.print();
	hourlyEmployee.print();
	overhourlyEmployee.print();


	return 0;

}