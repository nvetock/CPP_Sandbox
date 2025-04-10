#include "StructTests.h"
#include "EnumTests.h"
#include "ValuePassTest.h"
//#include "Person.h"
#include "Calendar.h"

#include <iostream>
#include <string>

const std::string& firstAlphabetical(const std::string& a, const std::string& b)
{
	return (a < b) ? a : b;
}

class Employee
{
private:
	std::string m_name{};
	char m_firstInitial{};

public:

	void setName(std::string_view name) { 
		m_name = name;
		m_firstInitial = name[0];
	}
	const std::string& getName() const { return m_name; }
	const char& getInitial() const { return m_firstInitial; }
};

int main()
{
	// FIXME: Cleanup testing output
	// ValuePassTest::test_ValuePassTest();
	// EnumTests::test_EnumTests();
	// StructTests::test_StructTests();

	/*
	Calendar cal = Calendar();

	cal.setDay(31);
	cal.setMonth(10);
	cal.setYear(2025);

	std::cout << cal.print() << std::endl;
	*/

	std::string hello{ "Hello" };
	std::string world{ "World" };

	std::cout << firstAlphabetical(hello, world);

	Employee e = Employee();

	std::cout << e.getName() << '\n';
	std::cout << e.getInitial() << '\n';
	e.setName("Mark");
	std::cout << e.getName() << '\n';
	std::cout << e.getInitial() << '\n';

	return 0;
}