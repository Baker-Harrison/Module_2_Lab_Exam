//
// Created by Harrison Baker on 7/17/24.
//

#ifndef MODULE_2_EXAM_DATE_H
#define MODULE_2_EXAM_DATE_H

#include <iostream>
using namespace  std;

class Date {
private:
	int month;
	int day;
	int year;
	string months[12] = {
				         "January",
						 "February",
						 "March",
						 "April",
						 "May",
						 "June",
						 "July",
						 "August",
						 "September",
						 "October",
						 "November",
						 "December",



	};

public:
	Date();
	Date(int Day, int Month, int Year);
	~Date();

	void print1();
	void print2();
	void print3();

};


#endif //MODULE_2_EXAM_DATE_H
