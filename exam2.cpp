#include <iostream>

#include "include/Date.h"

int main() {
	Date date;

	Date date2 (5, 8, 2006);

	date.print1();
	date.print2();
	date.print3();

	cout  << "-----------------------" << endl;
	date2.print1();
	date2.print2();
	date2.print3();


	return 0;
}
