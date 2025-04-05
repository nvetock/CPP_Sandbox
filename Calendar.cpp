#include "Calendar.h"

int Calendar::getDay() const { return m_day; }
void Calendar::setDay(int day) { m_day = day; }

int Calendar::getMonth() const { return m_month; }
void Calendar::setMonth(int month) { m_month = month; }

int Calendar::getYear() const { return m_year; }
void Calendar::setYear(int year) { m_year = year; }

void Calendar::setHoliday(std::string_view holiday) { m_holiday = holiday; }
// returning a reference to a string avoids the overhead of creating a new string object on return.
const std::string& Calendar::getHoliday() const { return m_holiday; }

std::string Calendar::print() {
	return std::to_string(m_month) + "/" + std::to_string(m_day) + "/" + std::to_string(m_year);
}
