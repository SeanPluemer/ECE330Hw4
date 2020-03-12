#include <iostream>
#include<iomanip>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "Employee.h"


using namespace std;

int main() {

	Employee employee1(	65, "Sean", "Pluemer",'A', 2500);
	employee1.print();

	SalariedEmployee employee2(23, "Sean", "Pluemer", 'A', 2500,100000);
	employee2.print();

	HourlyEmployee employee3(96, "Sean", "Pluemer", 'A', 2500, 10, 10,0);
	employee1.print();
	employee2.print();
	employee3.print();


	return 0;

}