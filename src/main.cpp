#include <iostream>
#include "functions.h"

#define WEEKDAY(number, name) \
	case number: \
		std::cout << #name << "\n"; \
		break;


int main()
{
	std::cout << "\tTask 23.1 Days of the week\n\n";

	int day;

	do
	{
		std::cout << "Number of a day of the week (1 - 7)\n";
		day = myCin<decltype(day)>();

	} while (day < 1 || day > 7);

	switch (day)
	{
	WEEKDAY(1, Monday)
	WEEKDAY(2, Tuesday)
	WEEKDAY(3, Wednesday)
	WEEKDAY(4, Thursday)
	WEEKDAY(5, Friday)
	WEEKDAY(6, Saturday)
	WEEKDAY(7, Sunday)
	default:
		std::cout << "Something went wrong\n";
		break;
	}
	


	return 0;
}
