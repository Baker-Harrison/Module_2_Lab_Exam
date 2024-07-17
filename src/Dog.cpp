//
// Created by Harrison Baker on 7/17/24.
//
#include "../include/Dog.h"

Dog::Dog(int Age, string Name, string Breed) {
	age = Age;
	name = Name;
	breed = Breed;
}

int Dog::getAgeInPersonYears() {
	return age * 7;
}

string Dog::getDescription() {
	return "A medium sized " + breed +  " with a happy face";
}

string Dog::sit() {
	return name +  " lies on on its belly";
}

string Dog::highFive() {
	return name + " lifts its paw to give you a high five";
}
