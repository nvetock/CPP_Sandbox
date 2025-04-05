#include "StructTests.h"
#include "EnumTests.h"
#include "ValuePassTest.h"

#include <iostream>


int main()
{
	// FIXME: Cleanup testing output
	ValuePassTest::test_ValuePassTest();
	EnumTests::test_EnumTests();
	StructTests::test_StructTests();

	return 0;
}