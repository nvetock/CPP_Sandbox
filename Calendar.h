#ifndef CALENDAR_H
#define CALENDAR_H

#include <string>

class Calendar {
public:
	int getDay() const;
	void setDay(int day);

	int getMonth() const;
	void setMonth(int month);

	int getYear() const;
	void setYear(int year);

	void setHoliday(std::string_view holiday);
	// returning a reference to a string avoids the overhead of creating a new string object on return.
	const std::string& getHoliday() const;

	std::string print();

private:
	int m_day{};
	int m_month{};
	int m_year{};
	std::string m_holiday{};
};

#endif