//
// Created by Harrison Baker on 7/17/24.
//
#include "../include/Car.h"
#include <iostream>
using namespace std;


Car::Car(string Make, string Model, int Year)
{
	make = Make;
	model = Model;
	year = Year;
}

string Car::getMake() {
	return make;
}

string Car::getModel() {
	return model;
}

int Car::getYear() {
	return year;
}

int Car::getMPH() {
	return speed;
}

int Car::getKPH() {
	return speed * 1.60934;
}

void Car::accelerate() {
	speed += 5;
}

void Car::brake() {
	speed -= 5;
}

void Car::setMake(string Make) {
	make = Make;
}

void Car::setModel(string Model)
{
	model = Model;
}
void Car::setYear(int Year)
{
	year = Year;
}

void Car::setSpeed(int Speed)
{
	speed = Speed;
}

