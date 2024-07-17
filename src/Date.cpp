//
// Created by Harrison Baker on 7/17/24.
//

#include "../include/Date.h"
#include <iostream>
using  namespace std;

Date::Date() {
	year = 2000;
	day = 1;
	month = 1;
}

Date::Date(int Day, int Month, int Year) {
	day = Day;
	month = Month;
	year = Year;
}

Date::~Date() {
	// cout << "Date destroyed" << endl;
}

void Date::print1() {
	cout << day << '/' << month << '/' << year << endl;
}

void Date::print2() {
	cout << months[month - 1] << ' ' << day << ", " << year << endl;
}

void Date::print3() {
	cout << day << " " << months[month - 1] << " " << year << endl;
}
