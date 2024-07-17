#include <iostream>

#include "include/Date.h"
#include "include/Car.h"
#include "include/Dog.h"

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

	// Dog Section

	cout << endl << endl;

	Dog dog1 (3, "Spot", "Australian Shepherd");
	cout << "Dog 1 description: " <<  dog1.getDescription() << endl;

	cout <<"Dog 1 sit:" << dog1.sit() << endl;
	cout << "Dog 1 high five:" <<  dog1.highFive() << endl;
	cout << endl << "--------------------------------" << endl;

	Dog dog2 (5, "Hyper", "German Shepherd");
	cout << "Dog 2 description: "<<  dog2.getDescription() << endl;

	cout << "Dog 2 sit: " << dog2.sit() << endl;
	cout << "Dog 2 high five: " << dog2.highFive() << endl;
	return 0;
}
