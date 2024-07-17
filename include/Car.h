//
// Created by Harrison Baker on 7/17/24.
//

#ifndef MODULE_2_EXAM_CAR_H
#define MODULE_2_EXAM_CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
	string make;
	string model;
	int year;
	int speed;

public:

	Car(string Make, string Model, int Year);

	// Getters

	string getMake();
	string getModel();
	int getYear();
	int getMPH();
	int getKPH();


	// Setters

	void setMake(string Make);
	void setModel(string Model);
	void setYear(int Year);
	void setSpeed(int Speed);

	void accelerate();
	void brake();


};


#endif //MODULE_2_EXAM_CAR_H
