#include <iostream>
#include "functions.h"

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
constexpr auto SUNDAY = 7;


int main()
{
	std::cout << "Task 23.1 Days of the week\n\n";

	int day;

	do
	{
		std::cout << "Number of a day of the week (1 - 7)\n";
		day = myCin<decltype(day)>();

	} while (day < MONDAY || day > SUNDAY);

	switch (day)
	{
	case MONDAY:
		std::cout << "Monday\n";
		break;
	case TUESDAY:
		std::cout << "Tuesday\n";
		break;
	case WEDNESDAY:
		std::cout << "Wednesday\n";
		break;
	case THURSDAY:
		std::cout << "Thursday\n";
		break;
	case FRIDAY:
		std::cout << "Friday\n";
		break;
	case SATURDAY:
		std::cout << "Saturday\n";
		break;
	case SUNDAY:
		std::cout << "Sunday\n";
		break;
	default:
		std::cout << "Something went wrong\n";
		break;
	}
	


	return 0;
}
