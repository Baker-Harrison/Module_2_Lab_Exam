#include <iostream>

#include "include/Date.h"
#include "include/Car.h"

int main() {

	// Date Section
	Date date;

	Date date2 (5, 8, 2006);

	date.print1();
	date.print2();
	date.print3();

	cout  << "-----------------------" << endl;
	date2.print1();
	date2.print2();
	date2.print3();

	// Car Section

	Car car ("test make", "test model", 1990 );

	car.setSpeed(35);

	cout << endl;
	cout << "Test 1" << endl;
	car.accelerate();
	cout << "Speed in MPH: " << car.getMPH() << endl;
	cout << "Speed in KPH: " << car.getKPH() << endl;
	car.brake();
	cout << "-------------------------------" << endl;
	cout << "Speed in MPH: " << car.getMPH() << endl;
	cout << "Speed in KPH: " << car.getKPH() << endl;

	cout << endl << "Test 2" << endl;
	car.accelerate();
	car.accelerate();
	car.accelerate();
	cout << "Speed in MPH: " << car.getMPH() << endl;
	cout << "Speed in KPH: " << car.getKPH() << endl;
	car.brake();
	cout << "-------------------------------" << endl;
	cout << "Speed in MPH: " << car.getMPH() << endl;
	cout << "Speed in KPH: " << car.getKPH() << endl;


	return 0;
}
