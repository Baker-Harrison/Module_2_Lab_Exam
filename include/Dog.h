//
// Created by Harrison Baker on 7/17/24.
//

#ifndef MODULE_2_EXAM_DOG_H
#define MODULE_2_EXAM_DOG_H

#include <iostream>

using namespace std;

class Dog
{
private:
	int age;
	string name;
	string breed;

public:
	Dog(int Age, string Name, string Breed);
	int getAgeInPersonYears();
	string getDescription();
	string sit();
	string highFive();



};


#endif //MODULE_2_EXAM_DOG_H
