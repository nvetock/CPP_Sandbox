#ifndef VALUEPASSTEST_H
#define VALUEPASSTEST_H

#include <string>
#include <iostream>

namespace ValuePassTest{
	void printByValue(std::string value);

	void printByReference(const std::string& ref);

	void printByAddress(const std::string* ptr);

	void getSinCos(double degrees, double& sinOut, double& cosOut);


	// Templated function for printing generic numbers with a string to identify
	// Ex. "Sin: {number}"
	template<typename T>
	void printNum(const std::string& s, T n);

	void test_ValuePassTest();
}
#endif