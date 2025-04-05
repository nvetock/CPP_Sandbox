#include "StructTests.h"
#include "EnumTests.h"
#include "ValuePassTest.h"
//#include "Person.h"
#include "Calendar.h"

#include <iostream>



int main()
{
	// FIXME: Cleanup testing output
	// ValuePassTest::test_ValuePassTest();
	// EnumTests::test_EnumTests();
	// StructTests::test_StructTests();

	Calendar cal = Calendar();

	cal.setDay(31);
	cal.setMonth(10);
	cal.setYear(2025);

	std::cout << cal.print() << std::endl;

	return 0;
}