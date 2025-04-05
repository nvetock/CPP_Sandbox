#include "ValuePassTest.h"
#include <cmath>

void ValuePassTest::printByValue(std::string value) {
	std::cout << value << '\n';
}

void ValuePassTest::printByReference(const std::string& ref) {
	std::cout << ref << '\n';
}

void ValuePassTest::printByAddress(const std::string* ptr) {
	std::cout << *ptr << '\n';
}

void ValuePassTest::getSinCos(double degrees, double& sinOut, double& cosOut) {
	constexpr double pi{ 3.14159265358979323846 };
	double radians = degrees * pi / 180.0;
	sinOut = std::sin(radians);
	cosOut = std::cos(radians);
}

template<typename T>
void ValuePassTest::printNum(const std::string& s, T n) {
	std::cout << s << ": " << n << '\n';
}

void ValuePassTest::test_ValuePassTest() {
	double degree{ 30.0 };
	double dSin{ 0 };
	double dCos{ 0 };

	printNum("sin", dSin);
	printNum("cos", dCos);
	getSinCos(degree, dSin, dCos);
	printNum("sin", dSin);
	printNum("cos", dCos);


	std::string w{ "Hello, World!" };

	printByValue(w);
	printByReference(w);
	printByAddress(&w);
}